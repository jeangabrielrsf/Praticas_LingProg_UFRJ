#include <iostream>
#include "forca.h"

using namespace std;

int main () {
    Forca forca(5);

    cout << "\nPalavras:" << endl;
    forca.listWords();
    cout << "\nDicas:" << endl;
    forca.listHints();
    forca.configure();

    return 0;
}