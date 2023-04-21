#include "MostrarLivrosAction.h"

namespace BibliotecaLivros
{
    MostrarLivrosAction::MostrarLivrosAction()
    {
    }

    MostrarLivrosAction::~MostrarLivrosAction()
    {
    }

    void MostrarLivrosAction::acao(Livro* livros, int& numLivros)
    {
        for (int i = 0; i < numLivros; i++)
        {
            std::cout << "Livro " << i + 1 << ":" << std::endl;
            std::cout << "ISBN: " << livros[i].getIsbn() << std::endl;
            std::cout << "Autor: " << livros[i].getAutor() << std::endl;
            std::cout << "Editora: " << livros[i].getEditora() << std::endl;
            std::cout << "Categoria: " << livros[i].getCategoria() << std::endl;
            std::cout << "Formato: " << livros[i].getFormato() << std::endl;
            std::cout << "Ano de publicação: " << livros[i].getAno() << std::endl;
        }
        
    }
}
