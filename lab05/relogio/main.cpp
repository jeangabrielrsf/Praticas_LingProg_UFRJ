#include <iostream>
#include "relogio.h"


using namespace std;

int main() {
    Relogio pontual;
    Relogio manual(12, 15, 30);

    cout << "Relógio pontual: ";
    pontual.showHour();

    cout << "Relógio manual: ";
    manual.showHour();

    pontual.resetHour(1, 2, 50);
    manual.resetHour();

    cout << endl;
    cout << "Relógio pontual: ";
    pontual.showHour();

    cout << "Relógio manual: ";
    manual.showHour();

    return 0;
}