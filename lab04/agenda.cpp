#include <iostream>
#include "Agenda.h"

Agenda::Agenda(int size) {
    this->maxContacts = size;
    fileName = "contactsFile.txt";

    readFile();
};

string Agenda::verifyNameSize(string name) {
    if (name.length() > maxNamesSize) {
        cout 
            << "Nome do contato maior que 10 caracteres!"
            << "\nTruncando o nome..."
        << endl;
        return name.substr(0, maxNamesSize);
    } else {
        return name;
    }
};

bool Agenda::contactExists(string name) {
    for (unsigned i = 0; i < contacts.size(); i++) {
        if (contacts.at(i).getName().compare(name.substr(0, maxNamesSize)) == 0){
            return true;
        } else {
            return false;
        }
    };
}


void Agenda::addContact(string name, string job, int age) {
    if (contacts.size() >= maxContacts) {
        cout 
            << "Agenda cheia! Impossível adicionar mais contatos!" 
        << endl;
    } else {
        if (contactExists(name)) {
            cout
                << "Contato já existente!"
            << endl;
        } else {
            Contato c(verifyNameSize(name), job, age);
            contacts.push_back(c);
        }
    }
};

void Agenda::eraseContact(string name) {
    for (unsigned i =0; i < contacts.size(); i++) {
        if (contacts.at(i).getName().compare(name.substr(0, maxNamesSize)) == 0){
            contacts.erase(contacts.begin() + i);
            cout
                << "Contato " << name.substr(0, maxNamesSize)
                << " deletado com sucesso."
            << endl;
        }
    }
};

void Agenda::readFile() {
    string name, job;
    int age;
    saveFile.open(fileName, fstream::in);
    if (!saveFile.is_open()) {
        cout << "Arquivo inexistente!" << endl;
        return;
    }

    while (saveFile.good()) {
        saveFile >> name >> job >> age;
        addContact(name, job, age);
    }

    saveFile.close();
};

void Agenda::writeFile() {
    saveFile.open(fileName, fstream::out);

    for (unsigned i = 0; i < contacts.size(); i++) {
        saveFile 
            << contacts.at(i).getName()
            << " " << contacts.at(i).getJob()
            << " " << contacts.at(i).getAge()
        << endl;
    }

    saveFile.close();
};

