#ifndef AGENDA_H
#define AGENDA_H

#include <string>
//#include <vector>
#include <array>
#include "cadastro.h"

using namespace std;

class Agenda {
    public:
        //void insereNome(string nome);
        void insereCadastro (Cadastro cadastro);
        //void mostraNomes();
        void mostraCadastros();

        static int numeroCadastros; // números de nomes presente no Array
    private:
        //long unsigned int tamanhoListaNomes;
        const static int maxCadastros = 5; // tamanho máximo do Array
        
        Cadastro cadastros[maxCadastros];

};


#endif