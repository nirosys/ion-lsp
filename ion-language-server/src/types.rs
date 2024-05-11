use std::sync::Arc;

use tower_lsp::lsp_types::Url;
use dashmap::DashMap;
use ropey::Rope;
use lsp_text::RopeExt;

use tower_lsp::lsp_types::*;

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

#[derive(Debug)]
pub struct Session {
    documents: DashMap<Url, Document>,
}

impl Session {

    pub fn new() -> Self {
        Session {
            documents: DashMap::new(),
        }
    }

    pub fn add_document(&self, url: Url, doc: Document) -> anyhow::Result<()> {
        self.documents.insert(url.clone(), doc);
        Ok(())
    }

}
