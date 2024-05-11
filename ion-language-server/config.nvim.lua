vim.lsp.start({
   name = 'Ion LSP',
   cmd = {'target/debug/ion-lsp'},
})

vim.lsp.set_log_level('debug')
vim.api.nvim_set_hl(0, '@lsp.type.string', { link = 'String', default = true })

function handler(_, result, ctx)
   print(result)
end

function ionpath()
   local client = vim.lsp.get_active_clients({
      name = 'Ion LSP'
   })[1]
   client.request("custom/ionpath", {}, handler)
end
