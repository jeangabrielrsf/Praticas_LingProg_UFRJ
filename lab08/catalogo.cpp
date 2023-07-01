#include <iostream>
#include <iomanip>
#include "catalogo.h"


ostream &operator<< (ostream &out, Catalogo &c) {
    Movie movie;
    for (unsigned i = 0; i < c.movies.size(); i++) {
        movie.name = c.movies.at(i).name;
        movie.label = c.movies.at(i).label;
        movie.grade = c.movies.at(i).grade;
        out << movie;
        out << endl;
    }

    return out;
}


// ostream &operator<< (ostream &out, Movie &m) {
//     out << "Filme: " << m.name << endl;
//     out << "Produtora: " << m.label << endl;
//     out << "Nota: " << m.grade << endl;

//     return out;
// }





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

string Catalogo::getMovieLabel(int index) {
    return movies.at(index).label;
}

double Catalogo::getMovieGrade(int index) {
    return movies.at(index).grade;
}