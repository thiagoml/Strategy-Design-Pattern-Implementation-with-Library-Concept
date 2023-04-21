#pragma once
#include "Livro.h"

namespace BibliotecaLivros
{

    class ContextoLivroAcao
    {
    private:
        BibliotecaLivros::Livro* livro;
        //BibliotecaLivros::Livro* colecaoLivros[MAX_LIVROS];

    public:
        ContextoLivroAcao() = default;
        ~ContextoLivroAcao();
        ContextoLivroAcao(BibliotecaLivros::Livro* livroAcao);
        void setLivroAcao(BibliotecaLivros::Livro* livroAcao);

        // executa ação sobre o livro 
        void executaLivroAction(Livro* colecaoLivros, int &posicao);
        void executaLivroAction(vector<Livro>& vector);
        
    };
}