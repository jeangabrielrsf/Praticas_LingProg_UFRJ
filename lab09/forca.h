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
        string getWord(int);
        void configure();
        
        bool teste();
        int getNumRodadas();

        void listWords();
        void listHints();

    private:
        void lerArquivo();
        int generateRandomInt(int max);

        vector<string> palavras;
        vector<string> dicas;
        int numRodadas;
        fstream file;
        string nomeArquivo = "dados.txt";

};
#endif