/*
 * InserirLivro.h
 *
 *  Created on: 04/04/2023
 *      Author: user~
 */
#ifndef INSERIRLIVRO_H_
#define INSERIRLIVRO_H_

#include "Livro.h"

using namespace std;

namespace BibliotecaLivros
{
    class InserirLivro : public Livro
    {
        public:
            InserirLivro();

            void inserirLivro(Livro* livros[], int& numLivros);
    };
}
#endif
