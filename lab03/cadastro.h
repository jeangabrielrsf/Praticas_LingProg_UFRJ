#ifndef CADASTRO_H
#define CADASTRO_H

#include <string>

using namespace std;

class Cadastro {
    public:
        Cadastro();
        Cadastro(string nome, string profissao, unsigned idade);
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


#endif