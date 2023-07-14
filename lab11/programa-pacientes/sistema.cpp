#include <iostream>
#include "sistema.h"

void Sistema::insere(string nome, int idade) {
    Paciente p(nome, idade);
    (pacientes.inserir(p))->p.print();
}

void Sistema::imprime() {
    cout << "Lista de pacientes: " << endl;
    pacientes.imprime();
}

Arvore<Paciente>::node* Sistema::buscar(string nome) {
    return pacientes.buscar(nome);
}