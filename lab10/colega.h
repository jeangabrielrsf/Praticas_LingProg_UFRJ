#ifndef COLEGA_H
#define COLEGA_H

#include <string>
#include "contato.h"


using namespace std;


//TODO: Construtor para inicializar atributos e getters para cada atributo
class Colega :public Contato {
    public:
        Colega(string, string, string, string);
        string getClasse();
        string getTurma();

        void print();

    private:
        string classe;
        string turma;
};


#endif