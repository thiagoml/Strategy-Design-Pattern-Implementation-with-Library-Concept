#pragma once
#include "Livro.h"

namespace BibliotecaLivros
{
    class AtualizarLivroAction : public BibliotecaLivros::Livro
    {
    public:
        AtualizarLivroAction() = default;
        void acao (Livro* colecaoLivros, int &numLivros) override;
    };
}
