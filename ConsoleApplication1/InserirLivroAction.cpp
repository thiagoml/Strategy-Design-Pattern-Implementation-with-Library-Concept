#include "InserirLivroAction.h"

namespace BibliotecaLivros
    
{
    Livro* InserirLivroAction::acao(Livro* colecaoLivros)
    {
        Livro* livroteste = new Livro();
        colecaoLivros[0].setAno(123);
        colecaoLivros[0].setIsbn("thiago");

        Livro* livroteste2 = new Livro();
        colecaoLivros[1].setAno(1234);
        colecaoLivros[1].setIsbn("thiago2");

        size_t tamanhoColecaoLivros = sizeof colecaoLivros / sizeof colecaoLivros[0];
        std:: cout << "tamanho da colecao: " << tamanhoColecaoLivros << std:: endl;

        //colecaoLivros[0] = livroteste;
        return nullptr;
    }
    
}
