#include <iostream>
#include "forca.h"

void Forca::lerArquivo() {
    string word;
    file.open(nomeArquivo, ios::in);

    while (file.good()) {
        file >> word;
        palavras.push_back(word);
    }
    file.close();
}


Forca::Forca(int rodadas) {
    lerArquivo();
    numRodadas = rodadas;
}