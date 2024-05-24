use std::sync::Arc;

use serde_json::{json, Value};
use tower_lsp::jsonrpc::{Error, Result};
use tower_lsp::lsp_types::*;
use tower_lsp::{Client, LanguageServer};

use crate::types::*;
use crate::handlers;

#[derive(Debug)]
pub struct IonLspService {
    pub client: Client,
    session: Arc<Session>,
}

#[tower_lsp::async_trait]
impl LanguageServer for IonLspService {
    async fn initialize(&self, _: InitializeParams) -> Result<InitializeResult> {
        Ok(InitializeResult {
            server_info: None,
            capabilities: ServerCapabilities {
                text_document_sync: Some(TextDocumentSyncCapability::Kind(
                    TextDocumentSyncKind::FULL,
                )),
                completion_provider: Some(CompletionOptions {
                    resolve_provider: Some(false),
                    trigger_characters: Some(vec!["$".to_string(), "'".to_string()]),
                    work_done_progress_options: Default::default(),
                    all_commit_characters: None,
                    ..Default::default()
                }),
                document_symbol_provider: Some(OneOf::Left(true)),
                definition_provider: Some(OneOf::Left(true)),
                semantic_tokens_provider: Some(SemanticTokensServerCapabilities::SemanticTokensOptions(
                    SemanticTokensOptions {
                        full: Some(SemanticTokensFullOptions::Bool(true)),
                        legend: SemanticTokensLegend {
                            token_types: vec![
                                SemanticTokenType::OPERATOR,
                                SemanticTokenType::NUMBER,
                                SemanticTokenType::STRING,
                                SemanticTokenType::COMMENT,
                                SemanticTokenType::VARIABLE,
                                SemanticTokenType::PARAMETER,
                            ],
                            ..Default::default()
                        },
                        ..Default::default()
                    }
                )),
                ..ServerCapabilities::default()
            },
            ..Default::default()
        })
    }

    async fn initialized(&self, _: InitializedParams) {
        self.client
            .log_message(MessageType::INFO, "initialized")
            .await;
    }

    async fn shutdown(&self) -> Result<()> {
        Ok(())
    }

    async fn did_change_configuration(&self, _: DidChangeConfigurationParams) {
        self.client
            .log_message(MessageType::INFO, "configuration changed!")
            .await
    }

    async fn did_open(&self, params: DidOpenTextDocumentParams) {
        self.client
            .log_message(MessageType::INFO, "File was opened")
            .await;

        let _ = handlers::did_open(self.session.clone(), params).await;
    }

    async fn did_change(&self, _: DidChangeTextDocumentParams) {
        self.client
            .log_message(MessageType::INFO, "file changed!")
            .await
    }

    async fn did_save(&self, _: DidSaveTextDocumentParams) {
        self.client
            .log_message(MessageType::INFO, "file saved!")
            .await;
    }

    async fn did_close(&self, _: DidCloseTextDocumentParams) {
        self.client
            .log_message(MessageType::INFO, "file closed!")
            .await;
    }

    async fn semantic_tokens_full(&self, _: SemanticTokensParams) -> Result<Option<SemanticTokensResult>> {
        handlers::semantic_tokens_full().await
            .map_err(|e| Error::new(tower_lsp::jsonrpc::ErrorCode::InternalError))
        // let ret = SemanticTokensResult::Tokens(
        //     SemanticTokens {
        //         result_id: None,
        //         data: vec![
        //             // {
        //             SemanticToken {
        //                 delta_line: 0,
        //                 delta_start: 0,
        //                 length: 1,
        //                 token_type: 0,
        //                 ..Default::default()
        //             },
        //             // foo
        //             SemanticToken {
        //                 delta_line: 1,
        //                 delta_start: 2,
        //                 length: 3,
        //                 token_type: 5,
        //                 ..Default::default()
        //             },
        //             // :
        //             SemanticToken {
        //                 delta_line: 0,
        //                 delta_start: 3,
        //                 length: 1,
        //                 token_type: 0,
        //                 ..Default::default()
        //             },
        //             // "bar"
        //             SemanticToken {
        //                 delta_line: 0,
        //                 delta_start: 2,
        //                 length: 5,
        //                 token_type: 2,
        //                 ..Default::default()
        //             },
        //             // ,
        //             SemanticToken {
        //                 delta_line: 0,
        //                 delta_start: 6,
        //                 length: 1,
        //                 token_type: 0,
        //                 ..Default::default()
        //             },
        //             // }
        //             SemanticToken {
        //                 delta_line: 1,
        //                 delta_start: 0,
        //                 length: 1,
        //                 token_type: 0,
        //                 ..Default::default()
        //             },
        //         ],
        //     }
        // );
        // Ok(Some(ret))
    }
}

impl IonLspService {

    pub fn new(client: Client) -> Self {
        Self {
            client,
            session: Arc::new(Session::new()),
        }
    }

    pub async fn ionpath(&self, _params: Vec<String>) -> Result<Value> {
        self.client
            .log_message(MessageType::INFO, "ION PATH GO!!")
            .await;
        Ok(json!({"status": "ok"}))
    }
}
