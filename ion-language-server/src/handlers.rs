use std::sync::Arc;

use tower_lsp::lsp_types::*;

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
