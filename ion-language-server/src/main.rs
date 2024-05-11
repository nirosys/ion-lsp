use tower_lsp::{LspService, Server};

mod server;
mod types;
mod handlers;

use server::IonLspService;


#[tokio::main]
async fn main() {
    let stdin = tokio::io::stdin();
    let stdout = tokio::io::stdout();

    let (service, socket) = LspService::build(|client| IonLspService::new(client))
        .custom_method("custom/ionpath", IonLspService::ionpath)
        .finish();
    Server::new(stdin, stdout, socket).serve(service).await;
}
