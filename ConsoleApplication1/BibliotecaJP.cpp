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
#include "MostrarLivrosAction.h"
#include "PesquisarLivroAction.h"


using namespace std;
using namespace BibliotecaLivros;


int main()
{
    // Livro* livros[MAX_LIVROS];
    // int numLivros = 0;

    Livro* colecaoLivros = new Livro[MAX_LIVROS];
    int posicao = 0;
    //Livro colecaoLivros[MAX_LIVROS];
    int opcao;

    // do
    // {
    //     std::cout << std::endl;
    //     std::cout << "Escolha uma opção:" << std::endl;
    //     std::cout << "1 - Inserir livro" << std::endl;
    //     std::cout << "2 - Pesquisar livro" << std::endl;
    //     std::cout << "3 - Mostrar todos os livros" << std::endl;
    //     std::cout << "4 - Atualizar informações de um livro" << std::endl;
    //     std::cout << "5 - Exportar dados dos livros para um arquivo" << std::endl;
    //     std::cout << "0 - Sair" << std::endl;
    //     std::cout << "Opção escolhida: " << std::endl;
    //     std::cin >> opcao;
    //     cin.clear();
    //     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //     //fflush(stdin);
    //
    //
    //     //
    //     switch (opcao)
    //     {
    //     case 1:
    //         ContextoLivroAcao acaoContext(new InserirLivroAction());
    //         acaoContext.executaLivroAction(colecaoLivros);
    //         break;
    //     //acaoContext.executaLivroAction();
    //     }
    //     //     case 2:
    //     //         PesquisarLivro::pesquisarLivro(livros, numLivros);
    //     //         break;
    //     //     case 3:
    //     //         MostrarLivros::mostrarLivros(livros, numLivros);
    //     //         break;
    //     //     case 4:
    //     //         AtualizarLivro::atualizarLivro(livros, numLivros);
    //     //         break;
    //     //     case 5:
    //     //         ExportarLivros::exportarLivros(livros, numLivros);
    //     //         break;
    //     //         std::cout << "Saindo do programa..." << std::endl;
    //     //         break;
    //     //     default: std::cout << "Opção inválida! Tente novamente." << std::endl;
    //     //         break;
    //     //     }
    //     // }while (opcao != 0);
    //     //
    //     //
    //     // // liberar memória alocada para os objetos Livro
    //     // for (int i = 0; i < numLivros; i++)
    //     // {
    //     //     delete livros[i];
    //     // }
    // }
    // while (opcao != 0);


    std::cout << std::endl;
    std::cout << "Escolha uma opção:" << std::endl;
    std::cout << "1 - Inserir livro" << std::endl;
    std::cout << "2 - Pesquisar livro" << std::endl;
    std::cout << "3 - Mostrar todos os livros" << std::endl;
    std::cout << "4 - Atualizar informações de um livro" << std::endl;
    std::cout << "5 - Exportar dados dos livros para um arquivo" << std::endl;
    std::cout << "0 - Sair" << std::endl;
    std::cout << "Opção escolhida: " << std::endl;

    // inicializa o controlador de contexto de ação de livros
    ContextoLivroAcao* acaoContext = new ContextoLivroAcao();

    while (!(std::cin >> opcao) || opcao != 0)
    {
        switch (opcao)
        {
        case 1:
            acaoContext->setLivroAcao(new InserirLivroAction());
            acaoContext->executaLivroAction(colecaoLivros, posicao);
            break;
        case 2:
            acaoContext->setLivroAcao(new PesquisarLivroAction());
            acaoContext->executaLivroAction(colecaoLivros, posicao);
            break;
        case 3:
            acaoContext->setLivroAcao(new MostrarLivrosAction());
            acaoContext->executaLivroAction(colecaoLivros, posicao);
            break;
        }

        std::cout << std::endl;
        std::cout << "Escolha uma opção:" << std::endl;
        std::cout << "1 - Inserir livro" << std::endl;
        std::cout << "2 - Pesquisar livro" << std::endl;
        std::cout << "3 - Mostrar todos os livros" << std::endl;
        std::cout << "4 - Atualizar informações de um livro" << std::endl;
        std::cout << "5 - Exportar dados dos livros para um arquivo" << std::endl;
        std::cout << "0 - Sair" << std::endl;
        std::cout << "Opção escolhida: " << std::endl;
        /*cin.clear();
        cin.ignore();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');*/
    }


    int tamanhoColecaoLivros = sizeof(colecaoLivros) / sizeof (colecaoLivros[0]);
    std::cout << "tamanho da colecao biblioteca: " << tamanhoColecaoLivros << std::endl;


    std::cout << "imprimindo valores: " << colecaoLivros[0].getIsbn() << std::endl;
    std::cout << "imprimindo valores21: " << colecaoLivros[1].getIsbn() << std::endl;
    std::cout << "imprimindo valores21: " << colecaoLivros[2].getIsbn() << std::endl;


    return 0;
}
