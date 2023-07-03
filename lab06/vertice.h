#ifndef VERTICE_H
#define VERTICE_H

#include <string>

using namespace std;

class Vertice {
    public: 
        Vertice(string = "semNome");
        string getName();
        string getName() const;

    private:
        const string name;
};

#endif