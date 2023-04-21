#include "InserirLivroAction.h"

#include <string>


namespace BibliotecaLivros
    
{
    // Livro* InserirLivroAction::recuperaCopiaLivros()
    // {
    //     Livro *livroValPreenchidos = new Livro();
    //     livroValPreenchidos->setAno(this->getAno());
    //     livroValPreenchidos->setIsbn(this->getIsbn());
    //     return livroValPreenchidos;
    // }

    void InserirLivroAction::cadastraLivrosUsuario()
    {
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

        std::cout << "Digite o ano de publicação do livro: ";
        std::cin >> ano;
    }

    // int InserirLivroAction::posicao_colecao() const
    // {
    //     return posicaoColecao;
    // }
    //
    // void InserirLivroAction::set_posicao_colecao(int posicao_colecao)
    // {
    //     posicaoColecao = posicao_colecao;
    // }

    void InserirLivroAction::acao(Livro* colecaoLivros, int &posicao)
    {
        //std::string isbn, autor, editora, categoria, formato;
        //int ano;

        cadastraLivrosUsuario();

        //int ultimoElemento = sizeof(colecaoLivros) / sizeof (colecaoLivros[0]);
        
        colecaoLivros[posicao] = *this->recuperaLivro();
        posicao++;

        // std::cout << "imprimindo valores apos inclusao" << std::endl;
        // for (int i =0; i < posicao+1; i++)
        // {
        //     std::cout << colecaoLivros[i].getIsbn() << std:: endl;
        //     std::cout << colecaoLivros[i].getAutor() << std:: endl;
        //     std::cout << colecaoLivros[i].getEditora() << std:: endl;
        //     std::cout << colecaoLivros[i].getCategoria()<< std:: endl;
        //     std::cout << colecaoLivros[i].getFormato() << std:: endl;
        //     std::cout << colecaoLivros[i].getAno() << std:: endl;
        // }
        // posicao++;
        // std:: cout << "posicao da colecao  " <<  posicao << std:: endl;
    }

    Livro* InserirLivroAction::acao(vector<Livro>& colecaoLivros)
    {
        cadastraLivrosUsuario();
        colecaoLivros.push_back( *this->recuperaLivro());
        std:: cout << "quantidade de livros :" << colecaoLivros.size() << " " << endl;
        return nullptr;
    }
}
