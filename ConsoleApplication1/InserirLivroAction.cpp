#include "InserirLivroAction.h"
#include <string>

namespace BibliotecaLivros
{
    void InserirLivroAction::cadastraLivrosUsuario()
    {
        setlocale(LC_ALL, "pt_BR.UTF-8");
        std::cout << "Digite o ISBN do livro: ";
        std::getline(std::cin.ignore(), isbn);

        std::cout << "Digite o autor do livro: ";
        std::getline(std::cin, autor);

        std::cout << "Digite a editora do livro: ";
        std::getline(std::cin, editora);

        std::cout << "Digite a categoria do livro: ";
        std::getline(std::cin, categoria);

        std::cout << "Digite o formato do livro: ";
        std::getline(std::cin, formato);

        std::cout << "Digite o ano de publicacao do livro: ";
        std::cin >> ano;
    }

    void InserirLivroAction::acao(Livro* colecaoLivros, int &posicao)
    {
        cadastraLivrosUsuario();
        colecaoLivros[posicao] = *this;
        posicao++;

    }
    
}
