#include <iostream>
#include <iomanip>
#include "contato.h"

Contato::Contato(string _nome, string _telefone) : nome(_nome), telefone(_telefone){};

string Contato::getNome() {
    return nome;
}

string Contato::getTelefone() {
    return telefone;
}

void Contato::print() {
    cout << left << setw(12) 
        <<getNome() << "||" 
        << right << setw(12) << getTelefone() 
    << endl;
}