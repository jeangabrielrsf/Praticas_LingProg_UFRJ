#include "arvore.h"

template<class T>
Arvore<T>::Arvore() {
    root = NULL;
}

template<class T>
typename Arvore<T>::node* Arvore<T>::inserir(T dado) {
    root = insert(dado, root);
    return root;
}

template<class T>
typename Arvore<T>::node* Arvore<T>::buscar(T dado) {
    root = find(dado, root);
    return root;
}

template<class T>
void Arvore<T>::imprime() {
    inorder(root);
    cout << endl;
}

template<class T>
Arvore<T>::Arvore(const Arvore&a) { //construtor de cópia
    root = a.root;
}


//******************************************
//Arvore de pacientes

Arvore<Paciente>::Arvore() {
    root = NULL;
}

Arvore<Paciente>::node* Arvore<Paciente>::inserir(Paciente p) {
    root = insert(p, root);
    return root;
}

Arvore<Paciente>::node* Arvore<Paciente>::buscar(string nome) {
    root = find(nome, root);
    return root;
}

void Arvore<Paciente>::imprime() {
    inorder(root);
    cout << endl;
}