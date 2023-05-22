#include <iostream>
#include "agenda.h"

Agenda::Agenda(int tamanho) {
    tamanhoListaNomes = tamanho;
}

void Agenda::insereNome(string nome) {
    if (nomes.size() >= tamanhoListaNomes) {
        cout << "Lista de nomes com tamanho máximo! Impossível inserir mais nomes!" << endl;
    } else {
        if (nome.size() > 10) {
            cout << "Nome com mais de 10 caracteres! Truncando para 10 caracteres..." << endl;
            nomes.push_back(nome.substr(0, 10));
        } else {
            nomes.push_back(nome);
        }
        cout << "Nome inserido com sucesso." << endl;
    }
    
}

void Agenda::mostraNomes() {
    cout << "Nomes na Agenda" << endl; 
    for (long unsigned i=0; i < nomes.size(); i++) {
        cout << "[" << i+1 << "] " << nomes.at(i) << endl;
    }
}