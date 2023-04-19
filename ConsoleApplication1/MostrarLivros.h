/*
 * MostrarLivros.h
 *
 *  Created on: 04/04/2023
 *      Author: user~
 */

#ifndef MOSTRARLIVROS_H_
#define MOSTRARLIVROS_H_
#include "Livro.h"
using namespace std;

namespace BibliotecaLivros
{
    /*class MostrarLivros : public Livro {
    
    //MostrarLivros()
    static void mostrarLivros(Livro* livros[], int numLivros);
    };
    }
    #endif*/


    class MostrarLivros
    {
    public:
        MostrarLivros();
        static void mostrarLivros(Livro* livros[], int numLivros);
    };
}
#endif
