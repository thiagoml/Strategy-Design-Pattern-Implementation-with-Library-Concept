/*
 * ExportarLivros.h
 *
 *  Created on: 04/04/2023
 *      Author: user~
 */

#ifndef EXPORTARLIVROS_H_
#define EXPORTARLIVROS_H_
#include "Livro.h"
using namespace std;

namespace BibliotecaLivros
{
    class ExportarLivros : public Livro
    {
    public:
        static void exportarLivros(Livro* livros[], int numLivros);
    };
}
#endif


/*
class ExportarLivros {
public:
	ExportarLivros();
};

} /* namespace BibliotecaLivros */

/*#endif /* EXPORTARLIVROS_H_ */
