#include <iostream>
#include <iomanip>
#include "catalogo.h"





void Catalogo::readFile() {
    Movie movie;
    file.open(fileName, fstream::in);
    if (!file.is_open()) {
        return;
    }
    while(file.good()) {
        file >> movie.name >> movie.label >> movie.grade;
        movies.push_back(movie);
    }
    file.close();
}

void Catalogo::writeFile() {
    file.open(fileName, fstream::out);
    for (unsigned i=0; i < movies.size(); i++) {
        file
            << movies.at(i).name << " "
            << movies.at(i).label << " "
            << setprecision(2) << movies.at(i).grade
        << endl;
    }
    file.close();
}


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

int Catalogo::operator() (string movieName, string attributeName, string newName) {
    int movieIndex = -1;
    for (unsigned i = 0; i < movies.size(); i++) {
        if (movies.at(i).name == movieName) {
            movieIndex = i;
            if (attributeName == "label") {
                movies.at(i).label = newName;
            } else if (attributeName == "name") {
                movies.at(i).name = newName;
            } 
        }
    }
    return movieIndex;
}

int Catalogo::operator() (string movieName, string attributeName, double newGrade) {
    int movieIndex = -1;
    for (unsigned i = 0; i < movies.size(); i++) {
        if (movies.at(i).name == movieName) {
            movieIndex = i;
            movies.at(i).grade = newGrade;
        }
    }
    return movieIndex;
}


int Catalogo::getMoreRatedMovie() {
    int movieIndex;
    double maxGrade = 0;
    if (movies.empty()) {
        return -1;
    }
    for (unsigned i = 0; i < movies.size(); i++) {
        if (movies.at(i) > maxGrade) {
            maxGrade = movies.at(i).grade;
            movieIndex = i;
        }
    }
    return movieIndex;
}


string Catalogo::getMovieName(int index) {
    return movies.at(index).name;
}

string Catalogo::getMovieLabel(int index) {
    return movies.at(index).label;
}

double Catalogo::getMovieGrade(int index) {
    return movies.at(index).grade;
}