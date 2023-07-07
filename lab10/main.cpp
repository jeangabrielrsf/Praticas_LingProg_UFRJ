#include <iostream>
#include "agenda.h"
#include "contato.h"

using namespace std;

int main() {
    Agenda a1;
    Agenda a2;

    Contato c1("Jean", "21988743639");
    Contato c2;

    a1.inserirContato(c1);
    a1.inserirContato(c2);

    cout << a1 << endl;
    


    return 0;
}