#include <iostream>
#include "cadastro.h"

string Cadastro::getNome() {
    return nome;
}

string Cadastro::getProfissao() {
    return profissao;
}

unsigned Cadastro::getIdade() {
    return idade;
}

void Cadastro::setNome(string nome) {
    if (nome.size() > 10) {
        cout 
            << "[" << nome << "]" 
            << " tem mais de 10 caracteres." << 
        endl;

        cout 
            << "O nome será armazenada como ["
            << nome.substr(0,10) << "]"    
        << endl;

        this->nome = nome.substr(0,10);

    } else {
        this->nome = nome;
    }
}

void Cadastro::setProfissao(string profissao) {
    this->profissao = profissao;
}

void Cadastro::setIdade(unsigned idade) {
    this->idade = idade;
}
