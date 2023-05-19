#ifndef PARALELEPIPEDO_H
#define PARALELEPIPEDO_H
class Paralelepipedo {
    public:
        Paralelepipedo (double x, double y, double z);
        void setX(double x);
        void setY(double y);
        void setZ(double z);
        double getX();
        double getY();
        double getZ();

        double long getVolume();
        
    private:
        double x, y, z;
        double long computeVolume();
};
#endif