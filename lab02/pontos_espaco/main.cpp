#include <iostream>
#include "classeLinha.h"
#include "classePonto.h"

using namespace std;

void printCoordenadas(Ponto ponto) {
    static int chamadas = 1;
    cout << "\n[Impressão no. " << chamadas
        << "] : Coordenadas de p ("
        << ponto.getX() << ", "
        << ponto.getY() << ", "
        << ponto.getZ() << ")" << endl;
    chamadas++;
}

int main () {

    Ponto pontoA(2, 2, 2);
    Ponto pontoB;
    Linha linha(pontoA, pontoB);

    printCoordenadas(pontoA);
    printCoordenadas(pontoB);

    cout << "O comprimento da linha é de: " << 
        linha.getComprimento() << endl;

    cout << "Atualizando o ponto P1..." << endl;
    pontoA.setX(3.5);
    pontoA.setZ(6);
    printCoordenadas(pontoA);
    
    linha.setPonto1(pontoA);

    cout << "O novo comprimento da linha é de: "
        << linha.getComprimento() << endl;
    

    return 0;
}