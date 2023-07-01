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

    friend ostream &operator<< (ostream &out, Movie &m) {
        out << "Filme: " << m.name << endl;
        out << "Produtora: " << m.label << endl;
        out << "Nota: " << m.grade << endl;

        return out; 
    }
};

class Catalogo {
    public:

        friend ostream &operator<< (ostream &, Movie &);
        friend ostream &operator<< (ostream &, Catalogo &);
        friend ostream &operator>> (ostream &, Catalogo &);
        void operator+=(const Movie& movie);
        int operator-=(const Movie& movie);
        int operator() (string movieName);

        
        string getMovieLabel(int index);
        double getMovieGrade(int index);

        friend struct Movie;
        
    private:
        vector<Movie> movies;
        int maxMovies;

};

#endif