#include <iostream>
#include <string>
#include "vertice.h"


using namespace std;

int main() {
    Vertice v1("Teste");
    Vertice v2;
    const Vertice vConst("souConstante");

    cout << "Vertice: " << v1.getName() << endl;
    cout << "Vertice const: " << vConst.getName() << endl;
    cout << "Vertice 2: " << v2.getName() << endl;

    return 0;
}