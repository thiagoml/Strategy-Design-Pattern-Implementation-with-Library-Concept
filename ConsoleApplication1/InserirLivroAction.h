#pragma once
#include "Livro.h"

namespace BibliotecaLivros
{
    class InserirLivroAction : public BibliotecaLivros::Livro
    {
        
    private:
        // exibe console para cadastro de livro
        void cadastraLivrosUsuario();
        
    public:
        InserirLivroAction()=default;
        ~InserirLivroAction();
        void acao (Livro* colecaoLivros, int &posicao) override;
    };
}
