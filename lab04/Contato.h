#ifndef CONTATO_H
#define CONTATO_H

#include <string>


using namespace std;

class Contato {
    public:
        Contato(string name, string job, int age);

        string getName();
        void setName(string name);
        string getJob();
        void setJob(string job);
        int getAge();
        void setAge(int age);

    private:
        string name;
        string job;
        int age;
};



#endif