#ifndef AGENDA_H
#define AGENDA_H

#include <vector>
#include "contato.h"

using namespace std;

class Agenda {
    public:
        void inserirContato(Contato);
        void removerContato(Contato);
    private:
        vector<Contato *> contatos;
};


#endif