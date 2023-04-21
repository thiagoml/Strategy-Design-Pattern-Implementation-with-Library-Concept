#include "ContextoLivroAcao.h"
#include <vcruntime.h>

namespace BibliotecaLivros
{
    ContextoLivroAcao::ContextoLivroAcao()
    {
    }

    ContextoLivroAcao::ContextoLivroAcao(BibliotecaLivros::Livro* livroAcao)
    {
        livro = livroAcao;
    }

    void ContextoLivroAcao::setLivroAcao(BibliotecaLivros::Livro* livroAcao)
    {
        livro = livroAcao;
    }

    void ContextoLivroAcao::executaLivroAction(Livro* colecaoLivros, int &posicao)
    {
        livro->acao(colecaoLivros, posicao);
    }

    void ContextoLivroAcao::executaLivroAction(vector<Livro>& colecaoLivros)
    {
        livro->acao(colecaoLivros);
    }
}
