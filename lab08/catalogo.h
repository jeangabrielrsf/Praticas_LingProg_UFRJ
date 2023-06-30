#ifndef CATALOGO_H
#define CATALOGO_H

#include <vector>
#include <string>

using namespace std;

struct {
    string name;
    string label;
    double grade;
} movie ;

//ATENÇÃO: NÃO PODEM TER FILMES COM O MESMO NOME!!!

class Catalogo {
    public:
        int Catalogo(string movieName);
        int Catalogo(string movieName, string attributeName, string newName);
        int Catalogo(string movieName, string attributeName, string newLabel);
        int Catalogo(string movieName, string attributeName, string newGrade);
        void listAllMovies();
        void listMovie(string movieName);
        void insertMovie(string movieName, string labelName, double grade);
        void insertMovieSorted(string movieName, string labelName, double grade);
        int deleteMovie(string movieName); //retorna o índice em que o filme foi removido
        int searchMostRated();

    private:
        vector<movie> movies;
        int maxMovies;
}

#endif