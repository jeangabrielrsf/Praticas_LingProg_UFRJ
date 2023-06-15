#include "Contato.h"

Contato::Contato(string name, string job, int age) {
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

int Contato::getAge() {
    return age;
};

void Contato::setName(string name) {
    this->name = name;
};

void Contato::setJob(string job) {
    this->job = job;
};

void Contato::setAge(int age) {
    this->age = age;
};