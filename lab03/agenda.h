#ifndef AGENDA_H
#define AGENDA_H

#include <string>
#include <vector>
#include <array>
#include "cadastro.h"

using namespace std;

class Agenda {
    public:
        Agenda(int tamanho);
        //void insereNome(string nome);
        void insereCadastro (Cadastro cadastro);
        //void mostraNomes();
        void mostraCadastros();

    private:
        //long unsigned int tamanhoListaNomes;
        long unsigned int maxCadastros; // tamanho máximo do Array
        
        vector<Cadastro> cadastros;

};


#endif