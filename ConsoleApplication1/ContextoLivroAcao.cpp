#include "ContextoLivroAcao.h"
#include <vcruntime.h>

namespace BibliotecaLivros
{
    ContextoLivroAcao::ContextoLivroAcao(BibliotecaLivros::Livro* livroAcao)
    {
        livro = livroAcao;
    }

    void ContextoLivroAcao::setLivroAcao(BibliotecaLivros::Livro* livroAcao)
    {
        livro = livroAcao;
    }

    void ContextoLivroAcao::executaLivroAction(Livro* colecaoLivros)
    {
        livro->acao(colecaoLivros);
    }
    
}
