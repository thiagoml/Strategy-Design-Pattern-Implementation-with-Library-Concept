/*
 * PesquisarLivro.h
 *
 *  Created on: 04/04/2023
 *      Author: user~
 */

#ifndef PESQUISARLIVRO_H_
#define PESQUISARLIVRO_H_

#include "Livro.h"
using namespace std;

namespace BibliotecaLivros
{
    /*	class PesquisarLivro : public Livro {
    
    
    static void pesquisarLivro(Livro* livros[], int numLivros);
    
    };
    }
    #endif*/


    class PesquisarLivro
    {
    public:
        PesquisarLivro();
        static void pesquisarLivro(Livro* livros[], int numLivros);
    };
}
#endif
