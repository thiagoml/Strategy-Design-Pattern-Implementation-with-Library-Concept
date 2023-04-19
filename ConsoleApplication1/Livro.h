//Livro.h
#define LIVRO_H_

#include <iostream>

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
        /*
        protected:
        std::string isbn;
        std::string autor;
        std::string editora;
        std::string categoria;
        std::string formato;
        int ano;
    
        public:
        Livro();
        Livro(std::string isbn, std::string autor, std::string editora, std::string categoria, std::string formato, int ano);
    
        std::string getISBN() const;
        std::string getAutor() const;
        std::string getEditora() const;
        std::string getCategoria() const;
        std::string getFormato() const;
        int getAno() const;
    
    
    };
    }
    #endif
    
    */

    public:
        // construtor
        ~Livro();
        Livro();
        Livro(std::string isbn, std::string autor, std::string editora, std::string categoria, std::string formato,
              int ano);

        // métodos públicos para acesso aos atributos protegidos
        // void atualizarIsbn(std::string isbn);
        // void atualizarAutor(std::string autor);
        // void atualizarEditora(std::string editora);
        // void atualizarCategoria(std::string categoria);
        // void atualizarFormato(std::string formato);
        // void atualizarAnoPublicacao(int ano);
        //
        
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

        virtual Livro* acao (Livro* colecaoLivros);

        
    };
}
