#include "classePonto.h"

Ponto::Ponto(double x, double y, double z) {
    dimX = x;
    dimY = y;
    dimZ = z;
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