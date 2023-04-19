/*
 * Livro.cpp
 *
 *  Created on: 04/04/2023
 *      Author: user~
 */

#include "Livro.h"

namespace BibliotecaLivros
{
    Livro::~Livro()
    {
        std::cout << "destructor livro";
    }
    Livro::Livro()
    {
        
    }

    Livro::Livro(std::string isbn, std::string autor, std::string editora, std::string categoria, std::string formato,
                 int ano)
    {
        this->isbn = isbn;
        this->autor = autor;
        this->editora = editora;
        this->categoria = categoria;
        this->formato = formato;
        this->ano = ano;
    }

    void Livro::setIsbn(std::string isbnParam)
    {
        this->isbn = isbnParam;
    }

    void Livro::setAutor(std::string autorParam)
    {
        this->autor = autorParam;
    }

    void Livro::setEditora(std::string editoraParam)
    {
        this->editora = editoraParam;
    }

    void Livro::setCategoria(std::string categoriaParam)
    {
        this->categoria = categoriaParam;
    }

    void Livro::setFormato(std::string formatoParam)
    {
        this->formato = formatoParam;
    }

    void Livro::setAno(int anoParam)
    {
        this->ano = anoParam;
    }

    std::string Livro::getIsbn() const
    {
        return isbn;
    }

    std::string Livro::getAutor() const
    {
        return autor;
    }

    std::string Livro::getEditora() const
    {
        return editora;
    }

    std::string Livro::getCategoria() const
    {
        return categoria;
    }

    std::string Livro::getFormato() const
    {
        return formato;
    }

    int Livro::getAno() const
    {
        return ano;
    }

    Livro* Livro::acao(Livro* colecaoLivros)
    {
        return nullptr;
    }
}
