#ifndef AGENDA_H
#define AGENDA_H

#include <vector>
#include <fstream>
#include "Contato.h"

using namespace std;

class Agenda{
    public:


    private:
        vector<Contato> contatos;
        int maxContacts;
        int maxNamesSize;
        fstream saveFile;

};

#endif