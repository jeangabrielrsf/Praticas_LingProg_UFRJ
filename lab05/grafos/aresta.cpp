#include "aresta.h"

Aresta::Aresta(Vertice *v1, Vertice *v2) {
    vertice1 = v1;
    vertice2 = v2;
    peso = 1.0;
}

Vertice *Aresta::getVertice1() {
    return vertice1;
}

Vertice *Aresta::getVertice2() {
    return vertice2;
}

double Aresta::getPeso() {
    return peso;
}