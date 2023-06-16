#include <iostream>
#include <iomanip>
#include "relogio.h"

Relogio::Relogio(int hours, int minutes, int seconds) {
    resetHour(hours, minutes, seconds);
};

Relogio::Relogio() {
    resetHour();
};

void Relogio::resetHour() {
    time (&hour);
    infoHour = localtime(&hour);

    setHours(infoHour->tm_hour);
    setMinutes(infoHour->tm_min);
    setSeconds(infoHour->tm_sec);
};

void Relogio::resetHour(int hours, int minutes, int seconds) {
    setHours(hours);
    setMinutes(minutes);
    setSeconds(seconds);
};

void Relogio::setHours(int hours) {
    if (hours < 0 || hours > 59) {
        this->hours = 0;
    } else {
        this->hours = hours;
    }
};

void Relogio::setMinutes(int minutes) {
   if (minutes < 0 || minutes > 59) {
        this->minutes = 0;
    } else {
        this->minutes = minutes;
    }
};

void Relogio::setSeconds(int seconds) {
     if (seconds < 0 || seconds > 59) {
        this->seconds = 0;
    } else {
        this->seconds = seconds;
    }
};

int Relogio::getHours() {
    return hours;
};

int Relogio::getMinutes() {
    return minutes;
};

int Relogio::getSeconds() {
    return seconds;
};

void Relogio::showHour() {
    cout 
        << setfill('0') << setw(2) << getHours() 
        << ":" << setw(2) << getMinutes()
        << ":" << setw(2) << getSeconds()
    << endl;
};

