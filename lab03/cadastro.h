#ifndef CADASTRO_H
#define CADASTRO_H

#include <string>

using namespace std;

class Cadastro {
    public:
        string getNome();
        string getProfissao();
        unsigned getIdade();

        void setNome(string name);
        void setProfissao(string job);
        void setIdade(unsigned age);

    private:
        string nome, profissao;
        unsigned idade;

};


#endif CADASTRO_H