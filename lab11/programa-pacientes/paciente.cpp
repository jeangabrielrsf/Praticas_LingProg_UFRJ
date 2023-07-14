#include <iostream>
#include "paciente.h"

Paciente::Paciente(string n, int i) : nome(n), idade(i) {};

string Paciente::getNome() {
    return this->nome;
};

int Paciente::getIdade() {
    return this->idade;
}

void Paciente::print() {
    cout << "Paciente: " << this->nome 
        << " , idade: " << this->idade
    << endl;
}