#include <iostream>
#include "paralelepipedo.h"


using namespace std;

int main() {
    double dimX=4.5 , dimY=5.6 , dimZ = 8.9;
    Paralelepipedo paralelepipedo(dimX, dimY, dimZ);

    cout << "\nO volume é de: " << paralelepipedo.getVolume() << endl;

    cout << "\nAlterando os valores das dimensões..." << endl;
    paralelepipedo.setX(-9);
    paralelepipedo.setY(10);
    paralelepipedo.setZ(15);

    cout << "\nO novo volume é de: " << paralelepipedo.getVolume() << endl;

    

    return 0;
}