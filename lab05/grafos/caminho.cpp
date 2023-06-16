#include <iostream>
#include "caminho.h"

double Caminho::custoCaminho() {
    double distancia = 0;

    for (unsigned i=0; i < arestas.size(); i++) {
        distancia += arestas.at(i)->getPeso();
    }

    return distancia;
}

void Caminho::inserirAresta(Aresta *aresta) {
    if(arestas.size() == 0) {
        arestas.push_back(aresta);
        cout 
            << "Aresta (" << aresta->getVertice1()->getRotulo()
            << ", " << aresta->getVertice2()->getRotulo()
            << ") inserida"
        << endl; 
    } else {
        if (aresta->getVertice1() == arestas.at(arestas.size()-1)->getVertice2()) {
            arestas.push_back(aresta);
                        cout 
                            << "Aresta (" << aresta->getVertice1()->getRotulo()
                            << ", " << aresta->getVertice2()->getRotulo()
                            << ") inserida"
                        << endl;
        } else {
            cout
                << "Não é possível inserir a aresta ("
                << aresta->getVertice1()->getRotulo()
                <<", " << aresta->getVertice1()->getRotulo()
                << ")"
            << endl;
        }
    }
}