#include "classePonto.h"

Ponto::Ponto(double x, double y, double z) {
    dimX = x;
    dimY = y;
    dimZ = z;
}

Ponto::Ponto() {
    dimX = 1.0;
    dimY = 1.0;
    dimZ = 1.0;
}

void Ponto::setX(double x) {
    dimX = x;
}

void Ponto::setY(double y) {
    dimY = y;
}

void Ponto::setZ(double z) {
    dimZ = z;
}

double Ponto::getX() {
    return dimX;
}

double Ponto::getY() {
    return dimY;
}

double Ponto::getZ() {
    return dimZ;
}