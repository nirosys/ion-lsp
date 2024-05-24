use std::sync::Arc;

use tower_lsp::lsp_types::Url;
use dashmap::DashMap;
use ropey::Rope;
use lsp_text::RopeExt;

use tower_lsp::lsp_types::*;
use tree_sitter_ion::*;
use tree_sitter::{Parser, Language};

#[derive(Debug)]
pub struct Document {
    pub content: Rope,
}

impl Document {
    pub async fn open(_session: Arc<Session>, params: DidOpenTextDocumentParams) -> anyhow::Result<Option<Self>> {
        let content = Rope::from(params.text_document.text);
        Ok(Some(
            Self {
                content,
            }
        ))
    }

    pub async fn semantic_tokens(&self) -> anyhow::Result<Option<SemanticTokensResult>> {
        Ok(None)
    }
}

pub struct Session {
    documents: DashMap<Url, Document>,
    parser: tree_sitter::Parser,
}

impl Session {

    pub fn new() -> Self {
        let language = language();
        let mut parser = Parser::new();
        parser.set_language(&language).unwrap();

        Session {
            documents: DashMap::new(),
            parser,
        }
    }

    pub fn add_document(&self, url: Url, doc: Document) -> anyhow::Result<()> {
        self.documents.insert(url.clone(), doc);
        Ok(())
    }
}

impl std::fmt::Debug for Session {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_fmt(format_args!("{{documents: {:?}}}", self.documents))
    }
}
