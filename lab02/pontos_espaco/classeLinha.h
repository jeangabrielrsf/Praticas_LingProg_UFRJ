#ifndef LINHA_H
#define LINHA_H

#include "classePonto.h"

class Linha {
    public:
        Linha (Ponto p1, Ponto p2);
        void setPonto1(Ponto p1);
        void setPonto2(Ponto p2);

        double getComprimento();

    private:
        Ponto ponto1, ponto2;
};

#endif