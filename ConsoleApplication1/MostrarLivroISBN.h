/*
 * MostrarLivroISBN.h
 *
 *  Created on: 04/04/2023
 *      Author: user~
 */

#ifndef MOSTRARLIVROISBN_H_
#define MOSTRARLIVROISBN_H_
#include "Livro.h"
using namespace std;

namespace BibliotecaLivros
{
    class MostrarLivroISBN : public Livro
    {
    public:
        MostrarLivroISBN() = default;
        static void mostrarLivroISBN(Livro* livros[], int numLivros);
    };
}
#endif
