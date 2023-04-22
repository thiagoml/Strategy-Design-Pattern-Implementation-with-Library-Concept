//Livro.h
#define LIVRO_H_

#include <iostream>
#include <vector>

using namespace std;

#pragma once
namespace BibliotecaLivros
{
    class Livro
    {
    protected:
        // atributos protegidos da classe Livro
        std::string isbn;
        std::string autor;
        std::string editora;
        std::string categoria;
        std::string formato;
        int ano;

    public:
        // construtor
        ~Livro();
        Livro();
        Livro(std::string isbn, std::string autor, std::string editora, std::string categoria, std::string formato,
              int ano);
        void setIsbn(std::string isbn);
        void setAutor(std::string autor);
        void setEditora(std::string editora);
        void setCategoria(std::string categoria);
        void setFormato(std::string formato);
        void setAno(int ano);


        // outros métodos públicos da classe Livro
        std::string getIsbn() const;
        std::string getAutor() const;
        std::string getEditora() const;
        std::string getCategoria() const;
        std::string getFormato() const;
        int getAno() const;

        // Livro* recuperaLivro();
        virtual void acao (Livro* colecaoLivros, int &posicao);
        // virtual Livro* acao (vector<Livro>& colecaoLivros);
    };
}
