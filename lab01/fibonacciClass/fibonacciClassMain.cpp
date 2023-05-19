#include <iostream>
#include "fibonacciClass.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int elementIndex;
    Fibonacci fibonacci;

    cout << "Entre com um índice da sequência de Fibonacci:" << endl;
    cin >> elementIndex;

    while(elementIndex < 0) {
        cout << "Erro!!! Por favor, entre com um índice não-negativo:" << endl;
        cin >> elementIndex;
    }

    fibonacci.setFibonacci(elementIndex);
    cout << "O termo " << elementIndex << " da sequência é: " << fibonacci.getFibonacci() << endl;



    return 0;
}
