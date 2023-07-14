#include <iostream>
#include <iomanip>
#include "sistema.h"
#include "arvore.h"
#include "paciente.h"

using namespace std;

int main () {
    Sistema s;
    string nomePaciente;
    int idadePaciente;
    int escolhaMenu = 0;
    Arvore<Paciente>::node *buscaPaciente;


    while (escolhaMenu != -1) {
        cout << setw(25) << setfill('*') << "" << endl;    
        cout << "Sistema Hospitalar" << endl;
        cout << setw(25) << setfill('*') << "" << endl; 
        cout << "Escolha uma opçao: " << endl;
        cout << "1 - Cadastrar Paciente" << endl;
        cout << "2 - Buscar Paciente" << endl;
        cout << "3 - Lista de Pacientes" << endl;
        cout << setw(25) << setfill('*') << "" << endl; 
        cout << endl;
        cout << " Selecione -1 para sair do programa" << endl;
        cin >> escolhaMenu;

        switch (escolhaMenu){
        case 1:
            system("clear");
            cin.clear();
            cin.ignore(__INT_MAX__, '\n');
            cout << "Digite o nome do paciente:" << endl;
            getline(cin, nomePaciente);
            cout << "Digite a idade do paciente:" << endl;
            cin >> idadePaciente;
            s.insere(nomePaciente, idadePaciente);


            break;
        case 2: 
            system("clear");
            cin.clear();
            cin.ignore(__INT_MAX__, '\n');
            cout << "Digite o nome do paciente:" << endl;
            getline(cin, nomePaciente);
            buscaPaciente = s.buscar(nomePaciente);
            if(buscaPaciente == NULL) {
                cout << "Nenhum paciente encontrado" << endl;
            } else {
                buscaPaciente->p.print();
            }
            cout << endl;
            cout << endl; 
            break;

        case 3:
            system("clear");
            s.imprime();
            break;

        case -1:
            cout <<"fechando o programa..." << endl;
            break;
        default:
            cout << "escolhe certo, arrombado" << endl;
            break;
        }

        }

    return 0;
}