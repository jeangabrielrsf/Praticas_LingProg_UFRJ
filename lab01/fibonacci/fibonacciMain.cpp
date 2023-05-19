#include <iostream>
#include "fibonacci.h"

int main(int argc, char const *argv[])
{
    using namespace std;
    int elementNumber;

    cout << "\nEntre com o número do elemento da série de Fibonacci:" << endl;
    cin >> elementNumber;

    while (elementNumber < 0) {
        cout << "\nPor favor, insira apenas números positivos ou zero:" << endl;
        cin >> elementNumber;
    }

    //código para calcular fibonacci
    cout << "\nO termo " << elementNumber << " da sequência é: " << calculateFibonacci(elementNumber) << endl;

    return 0;
}
