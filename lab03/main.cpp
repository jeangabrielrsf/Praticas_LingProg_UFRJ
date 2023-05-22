#include "agenda.h"

#define OK  0

int main() {
    Agenda agenda;
    Cadastro c1, c2;
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

    c2.setNome("Jean Gabriel");
    c2.setIdade(26);
    c2.setProfissao("Desenvolvedor Full Stack");

    agenda.insereCadastro(c2);
    agenda.mostraCadastros();

    return OK;
}