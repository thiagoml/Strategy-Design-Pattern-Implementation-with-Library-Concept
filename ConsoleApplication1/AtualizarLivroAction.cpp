#include "AtualizarLivroAction.h"

#include <string>

namespace BibliotecaLivros
{
    AtualizarLivroAction::AtualizarLivroAction()
    {
    }

    void AtualizarLivroAction::acao(Livro* livros, int& numLivros)
    {
        string isbn;
        cout << "Digite o ISBN do livro: ";
        std::getline(std::cin.ignore(), isbn);
        for (int i = 0; i < numLivros; i++)
        {
            if (livros[i].getIsbn()== isbn)
            {
                string autor, editora, categoria, formato;
                int ano;

                cout << "Digite o autor do livro: ";
                std::getline(std::cin, autor);

                cout << "Digite a editora do livro: ";
                std::getline(std::cin, editora);

                cout << "Digite a categoria do livro: ";
                std::getline(std::cin, categoria);

                cout << "Digite o formato do livro: ";
                std::getline(std::cin, formato);

                cout << "Digite o ano de publicação do livro: ";
                cin >> ano;
                cin.ignore();
                
                livros[i].setAutor(autor);
                livros[i].setEditora(editora);
                livros[i].setCategoria(categoria);
                livros[i].setFormato(formato);
                livros[i].setAno(ano);
                
                cout << "Livro atualizado com sucesso!" << endl;
                return;
            }
        }
    }
}
