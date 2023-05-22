#ifndef AGENDA_H
#define AGENDA_H

#include <string>
#include <vector>

using namespace std;

class Agenda {
    public:
        Agenda(int tamanho);
        void insereNome(string nome);
        void mostraNomes();

    private:
        vector<string> nomes;
        int tamanhoListaNomes;

};


#endif