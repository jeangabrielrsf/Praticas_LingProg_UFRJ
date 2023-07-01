#include <iostream>
#include <iomanip>
#include "catalogo.h"

using namespace std;

int main() {
    Catalogo catalogo;
    int menuOption = 0;
    Movie movie;
    int movieIndex;



    while (menuOption != 9) {
    cout 
        <<"********************************" << endl
        << setw(20) << "Menu Principal" << endl
        << "Escolha uma das opções abaixo:" << endl
        << "1 - Mostrar catálogo de filmes" << endl //ok só catalogo
        << "2 - Inserir filme no catálogo" << endl //ok sem ordenar
        << "3 - Remover filme do catálogo" << endl //ok
        << "4 - Buscar filme no catálogo" << endl
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
                cout << "Operação 1";
            break;

            case 6: 
                system("clear");
                cout << "Operação 1";
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


    return 0;
}