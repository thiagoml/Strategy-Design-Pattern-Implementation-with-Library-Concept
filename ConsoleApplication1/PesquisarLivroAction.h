#pragma once
#include "Livro.h"

namespace BibliotecaLivros
{
    class PesquisarLivroAction : public BibliotecaLivros::Livro
    {
    public:
        PesquisarLivroAction() = default;
        void acao (Livro* colecaoLivros, int &numLivros) override;
    };
}
