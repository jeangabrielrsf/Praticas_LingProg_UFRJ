#include "Contato.h"

Contato::Contato(string name, string job, string age) {
    this->name = name;
    this->job = job;
    this->age = age;
};

string Contato::getName() {
    return name;
};

string Contato::getJob() {
    return job;
};

string Contato::getAge() {
    return age;
};

void Contato::setName(string name) {
    this->name = name;
};

void Contato::setJob(string job) {
    this->job = job;
};

void Contato::setAge(string age) {
    this->age = age;
};