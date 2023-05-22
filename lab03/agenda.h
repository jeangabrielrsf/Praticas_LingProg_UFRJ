#ifndef AGENDA_H
#define AGENDA_H

#include <string>
//#include <vector>
#include <array>

using namespace std;

class Agenda {
    public:
        Agenda(int tamanho);
        void insereNome(string nome);
        void mostraNomes();

    private:
        //long unsigned int tamanhoListaNomes;
        const static int maxNomes = 5; // tamanho máximo do Array
        static int numeroNomes; // números de nomes presente no Array
        string nomes[maxNomes];

};


#endif