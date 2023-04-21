#pragma once
#include "Livro.h"

namespace BibliotecaLivros
{
    class ExportarLivroAction : public BibliotecaLivros::Livro
    {
    public:
        ExportarLivroAction() = default;
        void acao (Livro* colecaoLivros, int &numLivros) override;
    };
}
