#include "agenda.h"

Agenda::Agenda() {};

Agenda::Agenda(const Agenda &a) {
    contatos = a.contatos;
}

void Agenda::inserirContato(Contato &c) {
    contatos.push_back(&c);
}

void Agenda::removerContato(Contato &c) {   
    bool achou = false;
    for (unsigned i = 0; i < contatos.size(); i++) {
        if (contatos.at(i)->getNome() == c.getNome()) {
            achou = true;
            contatos.erase(contatos.begin(), contatos.begin()+i);
        }
    }
    if (!achou) {
        cout << "Nenhum contato com esse nome encontrado." << endl;
    }
}

Agenda Agenda::operator+(const Agenda&a) {
    Agenda novaAgenda;
    bool tem;
    for (unsigned i = 0; i < this->contatos.size(); i++) {
        Contato *c = this->contatos.at(i);
        novaAgenda.inserirContato(*c);
    }

    for (unsigned i=0; i < a.contatos.size(); i++) {
        tem = false;
        for (unsigned j=0; j < novaAgenda.contatos.size(); j++) {
            if (novaAgenda.contatos.at(j)->getNome() == a.contatos.at(i)->getNome()) {
                tem = true;
            }
        }
        if (!tem) {
            novaAgenda.inserirContato(*a.contatos.at(i));
        }
    }
    return novaAgenda;
}

Agenda Agenda::operator- (const Agenda& a) {
    Agenda novaAgenda;
    bool tem;

    for (unsigned int i = 0; i < this->contatos.size(); i++) {
        tem = false;

        for (unsigned j = 0; j < a.contatos.size(); j++) {
            if (a.contatos.at(j)->getNome() == this->contatos.at(i)->getNome()) {
                tem = true;
            }
        }
        if (!tem) {
            novaAgenda.inserirContato(*this->contatos.at(i));
        }
    }
}