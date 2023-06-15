#ifndef CONTATO_H
#define CONTATO_H

#include <string>


using namespace std;

class Contato {
    public:
        Contato(string name, string job, string age);

        string getName();
        void setName(string name);
        string getJob();
        void setJob(string job);
        string getAge();
        void setAge(string age);

    private:
        string name;
        string job;
        string age;
};



#endif