#include <iostream>
#include "agenda.h"


Agenda::Agenda(int tamanho) {
    maxCadastros = tamanho;
} 

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
    if (cadastros.size() >= maxCadastros) {
        cout << "Lista de cadastros com tamanho máximo! Impossível inserir mais!" << endl;
    } else {
        cadastros.push_back(cadastro);
        cout << "Cadastro inserido com sucesso." << endl;
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
    for (long unsigned int i=0; i < cadastros.size(); i++) {
        cout 
            << "[" << i+1 << "] " << cadastros.at(i).getNome() 
            << " - " << cadastros.at(i).getProfissao() 
            << " - " << cadastros.at(i).getIdade() 
        << endl;
        
    }
}