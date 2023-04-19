/*
 * AtualizarLivro.cpp
 *
 *  Created on: 04/04/2023
 *      Author: user~
 */

#include "AtualizarLivro.h"

#include <iostream>
#include <string>

namespace BibliotecaLivros
{
    void AtualizarLivro::atualizarLivro(Livro* livros[], int numLivros)
    {
        string isbn;
        cout << "Digite o ISBN do livro: ";
        getline(cin, isbn);
        for (int i = 0; i < numLivros; i++)
        {
            if (livros[i]->getIsbn() == isbn)
            {
                string autor, editora, categoria, formato;
                int ano;

                cout << "Digite o autor do livro: ";
                getline(std::cin, autor);

                cout << "Digite a editora do livro: ";
                getline(std::cin, editora);

                cout << "Digite a categoria do livro: ";
                getline(std::cin, categoria);

                cout << "Digite o formato do livro: ";
                getline(std::cin, formato);

                cout << "Digite o ano de publicação do livro: ";
                cin >> ano;
                cin.ignore();


                livros[i]->setAutor(autor);
                livros[i]->setEditora(editora);
                livros[i]->setCategoria(categoria);
                livros[i]->setFormato(formato);
                livros[i]->setAno(ano);


                cout << "Livro atualizado com sucesso!" << endl;
                return;
            }
        }
    }
}
