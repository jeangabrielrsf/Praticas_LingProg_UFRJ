#include "classeLinha.h"
#include <cmath>


Linha::Linha (Ponto p1, Ponto p2) {
    ponto1 = p1;
    ponto2 = p2;
}

void Linha::setPonto1 (Ponto p1) {
    ponto1 = p1;
}

void Linha::setPonto2 (Ponto p2) {
    ponto2 = p2;
}

double Linha::getComprimento() {
    return sqrt(pow(ponto1.getX() - ponto2.getX(), 2) + 
                pow(ponto1.getY() - ponto2.getY(), 2) + 
                pow(ponto1.getZ() - ponto2.getZ(), 2)    
    );
}