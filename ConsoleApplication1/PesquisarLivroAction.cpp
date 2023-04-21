#include "PesquisarLivroAction.h"

#include <string>

namespace BibliotecaLivros
{

    void PesquisarLivroAction::acao(Livro* livros, int& numLivros)
    {
        std::string isbn;
        std::cout << "Digite o ISBN do livro: ";
        std::getline(std::cin.ignore(), isbn);
        for (int i = 0; i < numLivros; i++)
        {
            if (livros[i].getIsbn() == isbn)
            {
                std::cout << "Livro encontrado:" << std::endl;
                std::cout << "ISBN: " << livros[i].getIsbn() << std::endl;
                std::cout << "Autor: " << livros[i].getAutor() << std::endl;
                std::cout << "Editora: " << livros[i].getEditora() << std::endl;
                std::cout << "Categoria: " << livros[i].getCategoria() << std::endl;
                std::cout << "Formato: " << livros[i].getFormato() << std::endl;
                std::cout << "Ano de publicação " << livros[i].getAno() << std::endl;
                return;
            }
        }

        std::cout << "Livro não encontrado!" << std::endl;
    }
}
