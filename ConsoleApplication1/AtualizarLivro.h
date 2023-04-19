/*
 * AtualizarLivro.h
 *
 *  Created on: 04/04/2023
 *      Author: user~
 */
/*
#ifndef ATUALIZARLIVRO_H_
#define ATUALIZARLIVRO_H_
#include "Livro.h"
using namespace std;

namespace BibliotecaLivros {



class AtualizarLivro : public Livro {
public:

	static void atualizarLivro(Livro* livros[], int numLivros);
	};
}
	#endif  */


#ifndef ATUALIZARLIVRO_H_
#define ATUALIZARLIVRO_H_

#include "Livro.h"

namespace BibliotecaLivros
{
    class AtualizarLivro
    {
    public:
        static void atualizarLivro(Livro* livros[], int numLivros);
    };
}

#endif
