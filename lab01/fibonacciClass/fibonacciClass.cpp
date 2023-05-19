#include "fibonacciClass.h"

void Fibonacci::setFibonacci(int index) {
    result = computeFibonacci(index);
}

int Fibonacci::getFibonacci() {
    return result;
}

int Fibonacci::computeFibonacci(int index) {
    if (index == 0) {
        return 0;
    } else if (index == 1) {
        return 1;
    } else
        return computeFibonacci(index - 1) + computeFibonacci(index - 2);
}