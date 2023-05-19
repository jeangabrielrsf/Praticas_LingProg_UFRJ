#include "fibonacci.h"

int calculateFibonacci(int index) {
    if (index == 0) {
        return 0;
    } else 
    if (index == 1) {
        return 1;
    } else return calculateFibonacci(index - 1) + calculateFibonacci(index - 2);
}