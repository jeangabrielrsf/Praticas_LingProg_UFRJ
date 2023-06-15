#ifndef AGENDA_H
#define AGENDA_H

#include <vector>
#include <fstream>
#include "Contato.h"

using namespace std;

class Agenda{
    public:
        Agenda(int size);
        void addContact(string name, string job, int age);
        void eraseContact(string name);
        bool contactExists(string name);

        void readFile();
        void writeFile();

    private:
        vector<Contato> contacts;
        int maxContacts;
        const int maxNamesSize = 10;
        fstream saveFile;
        string fileName;

        string verifyNameSize(string  name);

};

#endif