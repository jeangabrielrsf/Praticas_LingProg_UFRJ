//Programação da função global formataCadastro
#include "Cadastro.h"

void formataCadastro(Cadastro &c, void (*formata)(Cadastro &c)) {
    (*formata) (c);
}