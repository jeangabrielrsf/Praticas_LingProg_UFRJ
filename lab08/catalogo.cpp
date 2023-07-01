#include <iostream>
#include <iomanip>
#include "catalogo.h"


ostream &operator<< (ostream &out, Catalogo &c) {
    for (unsigned i = 0; i < c.movies.size(); i++) {
        out << "Filme: " << c.movies.at(i).name << endl;
        out << "Produtora: " << c.movies.at(i).label << endl;
        out << "Nota: " << c.movies.at(i).grade << endl;
        out << endl;
    }

    return out;
}

void Catalogo::operator+=(const Movie& movie) {
    movies.push_back(movie);
}

int Catalogo::operator-=(const Movie& movie) {
    for (unsigned i = 0; i < movies.size(); i++) {
        if (movies.at(i).name == movie.name) {
            movies.erase(movies.begin(), movies.begin()+i);
            return i;
        }
    }
    return -1;
}

int Catalogo::operator() (string movieName) {
    int index = -1;
    for (unsigned i = 0; i < movies.size(); i++) {
        if (movies.at(i).name == movieName) {
            index = i;
        }
    }
    return index;
}