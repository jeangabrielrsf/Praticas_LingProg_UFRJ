#include <iostream>
#include "Cadastro.h"
#include "global.h"


using namespace std;


void formataMaisculas (Cadastro &c) {
    for (unsigned i = 0; i < c.getName().length(); i++) {
        cout << static_cast<char>(toupper(c.getName()[i]));
    }
    cout << endl;

    for (unsigned i = 0; i < c.getAddress().length(); i ++) {
        cout << static_cast<char>(toupper(c.getAddress()[i]));
    }
    cout << endl;
    
    for (unsigned i = 0; i < c.getPhone().length(); i ++) {
        cout << static_cast<char>(toupper(c.getPhone()[i]));
    }
    cout << endl;
}


void formataCSV(Cadastro &c) {
    cout 
        << c.getName() << ", "
        << c.getAddress() << ", "
        << c.getPhone()
    << endl;
}


int main() {
    Cadastro cadastro("Jean", "Rua Pinto Guedes", "2122344489");

    formataCadastro(cadastro, formataMaisculas);
    cout << endl;

    formataCadastro (cadastro, formataCSV);


    return 0;
}