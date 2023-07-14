#ifndef SISTEMA_H
#define SISTEMA_H

#include "arvore.h"
#include "paciente.h"

using namespace std;

class Sistema {
    public:

        void insere(string, int);
        Arvore<Paciente>::node* buscar(string);
        void imprime();

    private: 
        Arvore<Paciente> pacientes;
};



#endif