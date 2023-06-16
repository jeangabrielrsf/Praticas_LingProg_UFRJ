#include <iostream>
#include "vertice.h"
#include "aresta.h"
#include "caminho.h"

using namespace std;


int main() {
    Vertice v1("A");
    Vertice v2("B");
    Vertice v3("C");
    Vertice v4("D");

    Aresta a1(&v1, &v2);
    Aresta a2(&v2, &v3);
    Aresta a3(&v3, &v4);
    Aresta errada(&v2, &v4);

    Caminho caminho;

    caminho.inserirAresta(&a1);
    caminho.inserirAresta(&a2);
    caminho.inserirAresta(&a3);
    //Agora vai dar ruim
    caminho.inserirAresta(&errada);

    cout << endl;
    caminho.imprimirCaminho();



    return 0;
}