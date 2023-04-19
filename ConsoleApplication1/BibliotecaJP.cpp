//Main============================================================================


#include <iostream>
#include "Livro.h"
#include "InserirLivro.h"
#include "PesquisarLivro.h"
#include "MostrarLivros.h"
#include "AtualizarLivro.h"
#include "ExportarLivros.h"
#include "ContextoLivroAcao.h"
#include "InserirLivroAction.h"


using namespace std;
using namespace BibliotecaLivros;


int main()
{
    std::cout << "teste";
    // Livro* livros[MAX_LIVROS];
    // int numLivros = 0;
    Livro* colecaoLivros = new Livro[MAX_LIVROS];
    int opcao;

    do
    {
        std::cout << std::endl;
        std::cout << "Escolha uma opção:" << std::endl;
        std::cout << "1 - Inserir livro" << std::endl;
        std::cout << "2 - Pesquisar livro" << std::endl;
        std::cout << "3 - Mostrar todos os livros" << std::endl;
        std::cout << "4 - Atualizar informações de um livro" << std::endl;
        std::cout << "5 - Exportar dados dos livros para um arquivo" << std::endl;
        std::cout << "0 - Sair" << std::endl;
        std::cout << "Opção escolhida: ";
        std::cin >> opcao;
        std::cin.ignore(); // limpa o buffer de entrada

        //
        switch (opcao)
        {
        case 1:
            ContextoLivroAcao acaoContext(new InserirLivroAction());
            acaoContext.executaLivroAction(colecaoLivros);
            //acaoContext.executaLivroAction();
       
            
        }
        //     case 2:
        //         PesquisarLivro::pesquisarLivro(livros, numLivros);
        //         break;
        //     case 3:
        //         MostrarLivros::mostrarLivros(livros, numLivros);
        //         break;
        //     case 4:
        //         AtualizarLivro::atualizarLivro(livros, numLivros);
        //         break;
        //     case 5:
        //         ExportarLivros::exportarLivros(livros, numLivros);
        //         break;
        //         std::cout << "Saindo do programa..." << std::endl;
        //         break;
        //     default: std::cout << "Opção inválida! Tente novamente." << std::endl;
        //         break;
        //     }
        // }while (opcao != 0);
        //
        //
        // // liberar memória alocada para os objetos Livro
        // for (int i = 0; i < numLivros; i++)
        // {
        //     delete livros[i];
        // }
    }
    while (opcao != 0);

    std:: cout << "imprimindo valores: " << colecaoLivros[0].getIsbn() << std::endl;
    std:: cout << "imprimindo valores21: " << colecaoLivros[1].getIsbn() << std::endl;

    
    return 0;
}
