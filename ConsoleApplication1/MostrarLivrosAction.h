#pragma once
#include "Livro.h"


namespace BibliotecaLivros
{
    class MostrarLivrosAction : public BibliotecaLivros::Livro
    {
    public:
        MostrarLivrosAction() = default;

        void acao (Livro* colecaoLivros, int &posicao) override;
    };
}
