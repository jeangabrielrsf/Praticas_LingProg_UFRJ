#ifndef GRAFO_H
#define GRAFO_H

#include <vector>
#include "vertice.h"

class Grafo {
    public:
        Grafo(double p);
        ~Grafo();

        void inserirVertice(Vertice v);
        void imprimirMatriz();
        double verificarGrauConectividade();

    private:
        vector<Vertice> vertices;
        int **matriz;
        double probability;
        int qtdArestas;
};

#endif