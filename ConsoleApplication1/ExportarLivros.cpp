/*
 * ExportarLivros.cpp
 *
 *  Created on: 04/04/2023
 *      Author: user~
 */

#include "ExportarLivros.h"
#include <iostream>
#include <fstream>

namespace BibliotecaLivros
{
    //ExportarLivros::ExportarLivros() {}

    void ExportarLivros::exportarLivros(Livro* livros[], int numLivros)
    {
        std::ofstream arquivo("livros.txt");

        for (int i = 0; i < numLivros; i++)
        {
            arquivo << livros[i]->getIsbn() << ";" << livros[i]->getAutor() << ";" << livros[i]->getEditora() << ";" <<
                livros[i]->getCategoria() << ";" << livros[i]->getFormato() << ";" << livros[i]->getAno() << std::endl;
        }

        arquivo.close();

        std::cout << "Livros exportados com sucesso para o arquivo livros.txt!" << std::endl;
    }
}
