#ifndef FORCA_H
#define FORCA_H

#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Forca {
    public:
        Forca(int rodadas);
        int getWordsQuantity();
        void configure();

    private:
        void lerArquivo();
        vector<string> palavras;
        int numRodadas;
        fstream file;
        string nomeArquivo = "dados.txt";

};
#endif