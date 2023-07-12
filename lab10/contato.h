#ifndef CONTATO_H
#define CONTATO_H

#include <string>



using namespace std;


//TODO: Construtor para inicializar atributos e getters para cada atributo
class Contato {
    public:
        Contato(string _nome = "Default", string _telefone = "21987654321");
        string getNome();
        string getTelefone();

        void print();


    private:
        string nome;
        string telefone;
};


#endif