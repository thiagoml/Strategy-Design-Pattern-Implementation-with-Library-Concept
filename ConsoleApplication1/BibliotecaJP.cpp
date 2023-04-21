/**
* Implementação do padrão de projeto Stragegy em C++
*
*/

#include <iostream>
#include "Livro.h"
#include "InserirLivro.h"
#include "PesquisarLivro.h"
#include "MostrarLivros.h"
#include "AtualizarLivro.h"
#include "AtualizarLivroAction.h"
#include "ExportarLivros.h"
#include "ContextoLivroAcao.h"
#include "ExportarLivroAction.h"
#include "InserirLivroAction.h"
#include "MostrarLivrosAction.h"
#include "PesquisarLivroAction.h"

using namespace std;
using namespace BibliotecaLivros;

#define MAX_LIVROS 100

void exibeMenuOpcoes();

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    Livro* colecaoLivros = new Livro[MAX_LIVROS];
    int posicao = 0;
    int opcao;

    exibeMenuOpcoes();

    // inicializa o controlador de contexto de ação de livros
    ContextoLivroAcao* acaoContext = new ContextoLivroAcao();

    while (!(std::cin >> opcao) || opcao != 0)
    {
        std::cout << "Opção escolhida: " << opcao << std::endl;
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
        case 4:
            acaoContext->setLivroAcao(new AtualizarLivroAction());
            acaoContext->executaLivroAction(colecaoLivros, posicao);
            break;
        case 5:
            acaoContext->setLivroAcao(new ExportarLivroAction());
            acaoContext->executaLivroAction(colecaoLivros, posicao);
            break;
        case 6:
            delete acaoContext;
            return 0;
        default:
            std::cout << "Valor Invalido!" << endl;
        }
        exibeMenuOpcoes();
    }

    return 0;
}

void exibeMenuOpcoes()
{
    std::cout << std::endl;
    std::cout << "Escolha uma opção:" << std::endl;
    std::cout << "1 - Inserir livro" << std::endl;
    std::cout << "2 - Pesquisar livro" << std::endl;
    std::cout << "3 - Mostrar dados de todos os livros" << std::endl;
    std::cout << "4 - Atualizar dados de um livro" << std::endl;
    std::cout << "5 - Exportar dados dos livros para um arquivo" << std::endl;
    std::cout << "6 - Sair" << std::endl;
}
