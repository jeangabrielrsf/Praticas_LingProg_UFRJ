#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
#include <vector>
#include "contato.h"

using namespace std;

class Agenda {
    friend ostream &operator<<(ostream &, Agenda &); //sobrecarga de operador <<

    public:
        Agenda();
        Agenda(const Agenda &); //construtor de cópia

        void inserirContato(Contato &);
        void removerContato(Contato &);

        Agenda operator+ (const Agenda &); //operador + sobrecarregado
        Agenda operator- (const Agenda &); //operador - sobrecarregado
    private:
        vector<Contato *> contatos;
};


#endif