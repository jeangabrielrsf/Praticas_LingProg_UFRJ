#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>

using namespace std;

class Paciente {
    public:
        Paciente(string n, int i);
        string getNome();
        int getIdade();
        void print();

    private:
        string nome;
        int idade;
};

#endif