#include "Cadastro.h"

Cadastro::Cadastro(string name, string address, string phone ) {
    this->name = name;
    this->address = address;
    this->phone = phone;
}

string Cadastro::getAddress() {
    return address;
}

string Cadastro::getName() {
    return name;
}

string Cadastro::getPhone() {
    return phone;
}