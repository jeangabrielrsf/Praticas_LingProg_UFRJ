#include <iostream>
#include "paralelepipedo.h"

using namespace std;

Paralelepipedo::Paralelepipedo(double constructX, double constructY, double constructZ) {
    setX(constructX);
    setY(constructY);
    setZ(constructZ);
}

double Paralelepipedo::getX() {
    return x;
}

double Paralelepipedo::getY() {
    return y;
}

double Paralelepipedo::getZ() {
    return z;
}

void Paralelepipedo::setX(double newX) {
    if (newX >= 0) {
        x = newX;
    } else {
        cout << "Valor negativo! Setando a dimensão X = 1 ..." << endl;
        x = 1;
    }
}

void Paralelepipedo::setY(double newY) {
    if (newY >= 0) {
        y = newY;
    } else {
        cout << "Valor negativo! Setando a dimensão Y = 1 ..." << endl;
        y = 1;
    }
}

void Paralelepipedo::setZ(double newZ) {
    if (newZ >= 0) {
        z = newZ;
    } else {
        cout << "Valor negativo! Setando a dimensão Z = 1 ..." << endl;
        z = 1;
    }
}

double long Paralelepipedo::getVolume() {
    return computeVolume();
}

double long Paralelepipedo::computeVolume() {
    return x*y*z;
}