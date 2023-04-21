#include "ExportarLivroAction.h"

#include <fstream>

namespace BibliotecaLivros
{
    void ExportarLivroAction::acao(Livro* livros, int& numLivros)
    {
        std::ofstream arquivo("livros.txt");

        for (int i = 0; i < numLivros; i++)
        {
            arquivo << livros[i].getIsbn() << ";" << livros[i].getAutor() << ";" << livros[i].getEditora() << ";" <<
                livros[i].getCategoria() << ";" << livros[i].getFormato() << ";" << livros[i].getAno() << std::endl;
        }

        arquivo.close();

        std::cout << "Livros exportados com sucesso para o arquivo livros.txt!" << std::endl;
    }
}
