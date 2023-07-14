#ifndef ARVORE_H
#define ARVORE_H

#include <vector>
#include <iostream>
#include "paciente.h"

using namespace std;

// considerando que o tipo T tem pelo menos um atributo nome
// que é uma string, para fazer a busca
template <class T>  
class Arvore  {

    struct node{
        T p;
        node *anterior, *proximo;
    };

    public:
        Arvore();
        Arvore(const Arvore&);
        Arvore operator+ (const Arvore &); //operador + sobrecarregado
        Arvore operator+ (const T &);
        Arvore operator+= (const T&);

        node* inserir(T );
        node* buscar(T);
        void imprime();




    private:

        node* root;

        node* insert(T data, node* n) {
            if(n == NULL) {
                n = new node;
                n->p = data;
                n->anterior = NULL;
                n->proximo = NULL;
            }
            else if (data < n->p) {
                n->anterior = insert(data, n->anterior);
            }
            else if (data > n->p) {
                n->proximo = insert(data, n->proximo);
            }
            return n;
        }

        node* find(T data, node* n) {
            if (n == NULL) {
                return NULL;
            }
            else if (data < n->p) {
                return find(data, n->anterior);
            }
            else if (data > n->p) {
                return find(data, n->proximo);
            }
            else {
                return n;
            }
        }

        void inorder(node* n) {
            if (n == NULL) {
                return;
            }
            inorder(n->anterior);
            cout << n->p << " ";
            inorder(n->proximo);
        }
};

template<>
class Arvore<Paciente> {
    public :
        struct node{
            node(Paciente p) : p(p), anterior(NULL), proximo(NULL) {}
            Paciente p;
            node *anterior, *proximo;
        };


        Arvore();
        Arvore(const Arvore&);
        Arvore operator+ (const Arvore &); //operador + sobrecarregado
        Arvore operator+ (const Paciente &);
        Arvore operator+= (const Paciente &);

        node* inserir(Paciente );
        node* buscar(string );
        void imprime();

    private:
        node* root;
        node* insert(Paciente paciente, node* n) {
            if (n == NULL) {
                n = new node(paciente);
                n->p = paciente;
                n->anterior = NULL;
                n->proximo = NULL;
            }
            else if (paciente.getNome() < n->p.getNome()) {
                n->anterior = insert(paciente, n->anterior);
            }
            else if (paciente.getNome() > n->p.getNome()) {
                n->proximo = insert(paciente, n->proximo);
            }
            return n;
        }

        node* find(string nome, node* n) {
            if(n == NULL) {
                return NULL;
            }
            else if (nome < n->p.getNome()) {
                return find(nome, n->anterior);
            }
            else if(nome > n->p.getNome()) {
                return find(nome, n->proximo);
            }
            else {
                return n;
            }
        }

        void inorder(node* n) {
            if (n == NULL) {;
                return;
            }
            inorder(n->anterior);
            cout << n->p.getNome() << ", "
            << n->p.getIdade() << " " << endl;
            inorder(n->proximo);
        }
};


#endif