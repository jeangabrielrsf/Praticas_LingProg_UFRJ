#include <iostream>
#include "agenda.h"


int Agenda::numeroCadastros = 0;

// void Agenda::insereNome(string nome) {
//     if (numeroNomes >= maxNomes) {
//         cout << "Lista de nomes com tamanho máximo! Impossível inserir mais nomes!" << endl;
//     } else {
//         if (nome.size() > 10) {
//             cout << "Nome com mais de 10 caracteres! Truncando para 10 caracteres..." << endl;
//             nomes[numeroNomes] = (nome.substr(0, 10));
//         } else {
//             nomes[numeroNomes] = nome;
//         }
//         cout << "Nome inserido com sucesso." << endl;
//         numeroNomes++;
//     }
    
// }

void Agenda::insereCadastro(Cadastro cadastro) {
    if (numeroCadastros >= maxCadastros) {
        cout << "Lista de cadastros com tamanho máximo! Impossível inserir mais!" << endl;
    } else {
        cadastros[numeroCadastros] = cadastro;
        cout << "Cadastro inserido com sucesso." << endl;
        numeroCadastros++;
    }
}

// void Agenda::mostraNomes() {
//     cout << "Nomes na Agenda" << endl; 
//     for (int i=0; i < numeroCadastros; i++) {
//         cout << "[" << i+1 << "] " << nomes[i] << endl;
//     }
// }

void Agenda::mostraCadastros() {
    cout << "Cadastros na Agenda" << endl; 
    for (int i=0; i < numeroCadastros; i++) {
        cout 
            << "[" << i+1 << "] " << cadastros[i].getNome() 
            << " - " << cadastros[i].getProfissao() 
            << " - " << cadastros[i].getIdade() 
        << endl;
        
    }
}