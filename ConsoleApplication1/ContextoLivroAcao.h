#pragma once
#include "Livro.h"

const int MAX_LIVROS = 100;

namespace BibliotecaLivros
{

    class ContextoLivroAcao
    {
        
    private:
        int quantidade = 0;
        BibliotecaLivros::Livro* livro;
        //BibliotecaLivros::Livro* colecaoLivros[MAX_LIVROS];

    public:
        ContextoLivroAcao();
        ContextoLivroAcao(BibliotecaLivros::Livro* livroAcao);
        void setLivroAcao(BibliotecaLivros::Livro* livroAcao);

        // executa ação sobre o livro 
        void executaLivroAction(Livro* colecaoLivros, int &posicao);
        void executaLivroAction(vector<Livro>& vector);
        
    };
}