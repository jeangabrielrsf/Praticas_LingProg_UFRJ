#include <iostream>
#include <time.h>
#include "forca.h"

void Forca::lerArquivo() {
    string word;
    string hint;

    file.open(nomeArquivo, ios::in);

    while (file.good()) {
        file >> word >> hint;
        word.erase(word.size()- 1);
        palavras.push_back(word);
        dicas.push_back(hint);
    }
    file.close();
}


Forca::Forca(int rodadas) {
    lerArquivo();
    numRodadas = rodadas;
}

int Forca::getWordsQuantity() {
    return palavras.size();
}

string Forca::getWord(int index) {
        return palavras.at(index);
}

void Forca::listWords() {
    for (unsigned int i = 0; i < palavras.size(); i++) {
        cout << palavras.at(i) << endl;
    }
}

void Forca::listHints() {
    for (unsigned i = 0; i < dicas.size(); i++) {
        cout << dicas.at(i) << endl;
    }
}

int Forca::generateRandomInt(int max) {
    int number;
    srand((unsigned)time(NULL));
    number = rand() % max;
    return number;
}

void Forca::configure() {
    int wordIndex = generateRandomInt(palavras.size());
    string selectedWord = getWord(wordIndex);
    cout << "Palavra escolhida: " << selectedWord << endl;
    cout << "Caracteres da palavra: " << selectedWord.size() << endl;

}