syntax on

"color scheme
"
colorscheme desert
"set line number

set number
set autoindent
set cindent
set sw=2
match Error /\%81v.\+/
set colorcolumn=81
set lbr
set tw=80
inoremap jk <esc>

function FileHeading()
          let s:line=line(".")
          call setline (s:line,   "/*")
          call append  (s:line,   " * Filename: " .expand("%"))
          call append  (s:line+1, " * Author: TODO")
          call append  (s:line+2, " * Userid: ATODO")
          call append  (s:line+3, " * Description: TODO")
          call append  (s:line+4, " * Date: " .strftime("%b %d %Y"))
          call append  (s:line+5, " * Sources of Help: TODO")
          call append  (s:line+6, " */")
          unlet s:line
 endfunction
  
 imap <F9> <ESC>mz:execute FileHeading()<CR>

