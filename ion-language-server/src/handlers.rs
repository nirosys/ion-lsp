use std::sync::Arc;

use tower_lsp::lsp_types::*;

use tree_sitter::{Parser, Language};
use tree_sitter_ion::*;

use ion_rs;

use crate::types::{Document, Session};

pub async fn did_open(
    session: Arc<Session>,
    params: DidOpenTextDocumentParams,
) -> anyhow::Result<()> {
    let uri = params.text_document.uri.clone();

    if let Some(doc) = Document::open(session.clone(), params).await? {
        session.add_document(uri.clone(), doc)?;
    } else {
        log::warn!("'textDocument/didOpen' failed; uri: {:#?}", uri);
    }

    Ok(())
}

pub async fn semantic_tokens_full(
) -> anyhow::Result<Option<SemanticTokensResult>> {
    Ok(None)
}

#[test]
fn test_parser() {
    let language = language();
    let mut parser = Parser::new();
    parser.set_language(&language).unwrap();

    let source_code = "$ion_1_0";
    let tree = parser.parse(source_code, None).unwrap();

    assert_eq!(tree.root_node().to_sexp(), "(source_file (version_marker))");
}
