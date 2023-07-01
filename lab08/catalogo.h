#ifndef CATALOGO_H
#define CATALOGO_H

#include <vector>
#include <string>

using namespace std;



//ATENÇÃO: NÃO PODEM TER FILMES COM O MESMO NOME!!!


    struct Movie {
        string name;
        string label;
        double grade;
    };

class Catalogo {
    public:

        friend ostream &operator<< (ostream &, Catalogo &);
        friend ostream &operator>> (ostream &, Catalogo &);
        void operator+=(const Movie& movie);
        int operator-=(const Movie& movie);
        int operator() (string movieName);
        void listAllMovies();
        void listMovie(string movieName);
        void insertMovie(string movieName, string labelName, double grade);
        void insertMovieSorted(string movieName, string labelName, double grade);
        int deleteMovie(string movieName); //retorna o índice em que o filme foi removido
        int searchMostRated();

    private:
      
        vector<Movie> movies;
        int maxMovies;

};



#endif