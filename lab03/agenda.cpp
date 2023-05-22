#include <iostream>
#include "agenda.h"



void Agenda::insereNome(string nome) {
    if (numeroNomes >= maxNomes) {
        cout << "Lista de nomes com tamanho máximo! Impossível inserir mais nomes!" << endl;
    } else {
        if (nome.size() > 10) {
            cout << "Nome com mais de 10 caracteres! Truncando para 10 caracteres..." << endl;
            nomes[numeroNomes] = (nome.substr(0, 10));
        } else {
            nomes[numeroNomes] = nome;
        }
        cout << "Nome inserido com sucesso." << endl;
        numeroNomes++;
    }
    
}

void Agenda::mostraNomes() {
    cout << "Nomes na Agenda" << endl; 
    for (long unsigned i=0; i < numeroNomes; i++) {
        cout << "[" << i+1 << "] " << nomes[i] << endl;
    }
}