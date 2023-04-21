#pragma once
#include "Livro.h"

namespace BibliotecaLivros
{
    class InserirLivroAction : public BibliotecaLivros::Livro
    {
    public:
        InserirLivroAction() = default;

    private:
        // exibe console para cadastro de livro
        void cadastraLivrosUsuario();
    public:

        
        
        // Livro* recuperaCopiaLivros();
        void acao (Livro* colecaoLivros, int &posicao) override;
        Livro* acao (vector<Livro>& colecaoLivros) override;
    };
}
