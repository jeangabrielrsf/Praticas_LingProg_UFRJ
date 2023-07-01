#ifndef CATALOGO_H
#define CATALOGO_H

#include <vector>
#include <string>
#include <fstream>

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

    bool operator< (double _grade) {
        if (grade < _grade) {
            return true;
        } else {
            return false;
        }
    }

    bool operator> (double _grade) {
        if (grade > _grade) {
            return true;
        } else {
            return false;
        }
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
        int operator() (string movieName, string attributeName, string newName);
        int operator() (string movieName, string attributeName, double newGrade);
        int getMoreRatedMovie();

        string getMovieName(int index);
        string getMovieLabel(int index);
        double getMovieGrade(int index);

        void readFile();
        void writeFile();

        friend struct Movie;
        
    private:
        vector<Movie> movies;
        int maxMovies;
        fstream file;
        string fileName = "catalogo.txt";


};

#endif