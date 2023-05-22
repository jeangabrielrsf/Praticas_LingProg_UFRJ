#include "agenda.h"

#define OK  0

int main() {
    Agenda agenda;
    Cadastro c1;
    // agenda.insereNome("Jean");
    // agenda.insereNome("Bruna");
    // agenda.insereNome("João Pedro");
    // agenda.insereNome("Anik");
    // agenda.insereNome("Carlos Henrique");

    // //tentativa de inserir nome além do valor máximo definido
    // agenda.insereNome("Arthur");


    // agenda.mostraNomes();

    agenda.insereCadastro(c1);
    agenda.mostraCadastros();

    return OK;
}