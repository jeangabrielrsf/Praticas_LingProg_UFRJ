#ifndef PONTO_H
#define PONTO_H

class Ponto {
    public:
        Ponto(double x, double y, double z);

        void setX(double x);
        void setY(double y);
        void setZ(double z);

        double getX();
        double getY();
        double getZ();


    private:
        double dimX, dimY, dimZ;
};


#endif