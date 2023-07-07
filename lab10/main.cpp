#include <iostream>
#include "agenda.h"
#include "contato.h"

using namespace std;

int main() {
    Agenda a1;

    Contato c1("Jean", "21988743639");
    Contato c2("Bruna", "21985757442");
    Contato c3;

    a1.inserirContato(c1);
    a1.inserirContato(c2);
    a1.inserirContato(c3);

    cout << "Agenda a1: \n" << a1 << endl;
    
    cout << "Removendo contato" << endl;
    a1.removerContato(c3);

    cout << a1 << endl;

    Agenda a2(a1);

    cout << "Agenda de cópia: \n" << a2 << endl;

    Agenda a3;

    Contato c4("Joao", "21999999999");
    Contato c5("Anik", "21998897912");
    a3.inserirContato(c4);
    a3.inserirContato(c5);
    cout << "Agenda a3: \n" << a3 << endl;


    Agenda last = a1 + a3;

    cout << "Soma a1 + a3: \n" << last << endl;

    Agenda other = a3 - a2;
    cout << "Diferença a3 - a2: \n" << other << endl;

    a1.inserirContato(c4);
    cout << a1 << endl;

    other = a1 - a3;
    cout << other << endl;

    return 0;
}