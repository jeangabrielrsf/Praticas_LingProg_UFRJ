#ifndef CAMINHO_H
#define CAMINHO_H

#include <vector>
#include "aresta.h"

using namespace std;

class Caminho{
    public:
        void inserirAresta(Aresta *);
        double custoCaminho();
        void imprimirCaminho();


    private:
        vector<Aresta *> arestas;

};

#endif