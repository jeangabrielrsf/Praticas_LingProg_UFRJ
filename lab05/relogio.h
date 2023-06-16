#ifndef RELOGIO_H
#define RELOGIO_H

#include <time.h>
#include <string>

using namespace std;

class Relogio {
    public:
        Relogio(int hours, int minutes, int seconds);
        Relogio();

        void resetHour();
        void resetHour(int hours, int minutes, int seconds);

        int getHours();
        int getMinutes();
        int getSeconds();

        void setHours(int hours);
        void setMinutes(int minutes);
        void setSeconds(int seconds);

    private:
        time_t hour;
        struct tm *infoHour;
        int seconds, minutes, hours;
};

#endif