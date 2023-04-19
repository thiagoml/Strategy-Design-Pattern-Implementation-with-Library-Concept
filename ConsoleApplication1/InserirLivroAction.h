#pragma once
#include "Livro.h"

namespace BibliotecaLivros
{
    class InserirLivroAction : public BibliotecaLivros::Livro
    {
        
    public:
        virtual Livro* acao (Livro* colecaoLivros);
    };
}
