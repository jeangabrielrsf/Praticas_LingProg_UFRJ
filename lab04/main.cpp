#include "Contato.h"
#include "Agenda.h"

using namespace std;

int main() {

    Agenda agenda(4);
    agenda.showContacts();

    agenda.addContact("Jean Gabriel", "Desenvolvedor", 26);
    agenda.addContact("Bruna", "Consultora ESG", 25);

    agenda.showContacts();

    agenda.eraseContact("Bruna");
    agenda.addContact("Bruna", "Consultora ESG", 25);
    agenda.addContact("Bruna", "Consultora ESG", 25);

    agenda.showContacts();

    agenda.writeFile();


    return 0;
}