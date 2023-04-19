/*
 * InserirLivro.cpp
 *
 *  Created on: 04/04/2023
 *      Author: user~
 */

#include "InserirLivro.h"
#include <iostream>
#include <string>

namespace BibliotecaLivros
{
    InserirLivro::InserirLivro()
    {
    }

    void InserirLivro::inserirLivro(Livro* livros[], int& numLivros)
    {
        if (numLivros >= 100)
        {
            std::cout << "Erro: limite de livros alcançado!" << std::endl;
            return;
        }

        std::string isbn, autor, editora, categoria, formato;
        int ano;

        std::cout << "Digite o ISBN do livro: ";
        std::getline(std::cin, isbn);

        std::cout << "Digite o autor do livro: ";
        std::getline(std::cin, autor);

        std::cout << "Digite a editora do livro: ";
        std::getline(std::cin, editora);

        std::cout << "Digite a categoria do livro: ";
        std::getline(std::cin, categoria);

        std::cout << "Digite o formato do livro: ";
        std::getline(std::cin, formato);

        std::cout << "Digite o ano de publicação do livro: ";
        std::cin >> ano;
        std::cin.ignore(); // limpa o buffer de entrada

        Livro* livro = new Livro(isbn, autor, editora, categoria, formato, ano);
        livros[numLivros] = livro;
        numLivros++;

        std::cout << "Livro inserido com sucesso!" << std::endl;
    }
}
