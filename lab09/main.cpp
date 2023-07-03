#include <iostream>
#include "forca.h"

using namespace std;

int main () {
    Forca forca(5);

    cout << "Número de palavras: "
        << forca.getWordsQuantity() << endl;

}