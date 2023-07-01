#include <iostream>
#include <iomanip>
#include "catalogo.h"

using namespace std;

int main() {
    Catalogo catalogo;
    int menuOption = 0;
    Movie movie;
    int movieIndex;
    string editChoice;
    string editAttribute;
    double editGradeAttribute;

    catalogo.readFile();


        system("clear");
    while (menuOption != 9) {

    cout 
        <<"********************************" << endl
        << setw(20) << "Menu Principal" << endl
        << "Escolha uma das opções abaixo:" << endl
        << "1 - Mostrar catálogo de filmes" << endl //ok só catalogo
        << "2 - Inserir filme no catálogo" << endl //ok sem ordenar
        << "3 - Remover filme do catálogo" << endl //ok
        << "4 - Buscar filme no catálogo" << endl // ok
        << "5 - Editar informações de um filme" << endl
        << "6 - Mostrar filme mais bem avialiado" << endl
        << "9 - Sair do programa" << endl
    << endl;    


        cin >> menuOption;
        switch (menuOption) {
            case 1: 
                system("clear");
                cout << catalogo;
                cin.clear();
            break;

            case 2: 
                system("clear");
                cin.clear();
                cin.ignore(__INT_MAX__, '\n');
                cout << "Digite o nome do filme:" << endl;
                getline(cin, movie.name);
                cout << "Digite o nome da produtora:" << endl;
                getline(cin, movie.label);
                cout << "Digite a nota do filme:" << endl;
                cin >> movie.grade;
                catalogo += movie;
                cout << "Filme adicionado!\n\n" << endl;
                cin.clear();
            break;

            case 3: 
                system("clear");
                cin.clear();
                cin.ignore(__INT_MAX__, '\n');
                movie.label = "";
                movie.grade = 0;
                cout << "Digite o nome do filme:";
                getline(cin, movie.name);
                movieIndex =  catalogo -= movie;
                if (movieIndex != -1) {
                cout 
                    << "Filme " + movie.name
                    << " removido na posição "
                    << movieIndex << "\n\n" 
                << endl;
                } else {
                    cout << "Nenhum filme ["
                        << movie.name
                        << "] encontrado!\n\n"
                    << endl;
                }
                cin.clear();
            break;

            case 4: 
                system("clear");
                cin.clear();
                cin.ignore(__INT_MAX__, '\n');
                cout << "Digite o nome do filme:" << endl;
                getline(cin, movie.name);
                movieIndex = catalogo(movie.name);
                if (movieIndex != -1) {
                    movie.label = catalogo.getMovieLabel(movieIndex);
                    movie.grade = catalogo.getMovieGrade(movieIndex);
                    cout << movie;
                } else {
                    cout << "Nenhum filme ["
                    << movie.name + "] encontrado!\n\n"
                    << endl;
                }
                cin.clear();
            break;

            case 5: 
                system("clear");
                cin.clear();
                cin.ignore(__INT_MAX__, '\n');
                cout << "Digite o nome do filme que quer editar as informações:" << endl;
                getline(cin, movie.name);
                cout << "Qual atributo deseja mudar?" << endl
                << "Escreva [label] para alterar a produtora" << endl
                << "Escreva [name] para alterar o nome do filme" << endl
                << "Escreva [grade] para alterar a nota do filme" << endl
                << "OBS: escrever sem os colchetes!" << endl;
                getline(cin, editChoice);
                
                if(editChoice == "label" || editChoice == "name") {
                    cout << "Digite o novo valor do atributo " + editChoice + ":" << endl;
                    getline(cin, editAttribute);
                    movieIndex = catalogo(movie.name, editChoice, editAttribute);
                } else if (editChoice == "grade") {
                    cout << "Digite o novo valor do atributo " + editChoice + ":" << endl;
                    cin >> editGradeAttribute;
                    movieIndex = catalogo(movie.name, editChoice, editGradeAttribute);
                }
                if (movieIndex != -1) {
                    cout << "Filme editado no índice " << movieIndex << "!\n\n" << endl;
                } else {
                    cout << "Nenhum filme com esse nome encontrado!\n\n" << endl;
                }
                cin.clear();

            break;

            case 6: 
                system("clear");
                movieIndex = catalogo.getMoreRatedMovie();
                if (movieIndex == -1) {
                    cout << "Nenhum filme no catálogo!\n\n" << endl;
                } else {

                
                cout << "O filme de maior nota se encontra no índice"
                    << movieIndex
                << endl;
                movie.name = catalogo.getMovieName(movieIndex);
                movie.label = catalogo.getMovieLabel(movieIndex);
                movie.grade = catalogo.getMovieGrade(movieIndex);
                cout << movie;
                }
            break;

            case 9:
                system("clear");
                cout << "Saindo do programa..." << endl;
            break;

            default:
                cout << "invalido" << endl;
            break;

        }
    }

    catalogo.writeFile();
    return 0;
}