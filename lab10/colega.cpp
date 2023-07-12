#include <iostream>
#include "colega.h"

Colega::Colega(string _nome, string _telefone, string _classe, string _turma) : Contato(_nome, _telefone), classe(_classe), turma(_turma) {}

string Colega::getClasse() {
    return classe;
}

string Colega::getTurma() {
    return turma;
}

void Colega::print() {
    Contato::print();
    cout << "[" << getClasse()
        << ", " << getTurma()
        << "]" << endl;
}