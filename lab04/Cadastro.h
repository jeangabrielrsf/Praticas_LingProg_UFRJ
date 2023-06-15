#ifndef CADASTRO_H
#define CADASTRO_H

#include <string>

using namespace std;

class Cadastro {
    public:
        Cadastro(string name, string address, string phone);
        string getName();
        string getAddress();
        string getPhone();



    private:
        string name, address, phone;

};


#endif