#include "ContextoLivroAcao.h"
#include <vcruntime.h>

namespace BibliotecaLivros
{
    ContextoLivroAcao::~ContextoLivroAcao()
    {
        std:: cout << "Limpando memoria do meu controlados de contexto de acoes de livro" << std:: endl;
        delete this->livro;
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
