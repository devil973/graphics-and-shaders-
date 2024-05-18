#ifndef TESTCASE_H
#define TESTCASE_H

#include "function.h"

float testcase_prime() {
    float marks = 0;
    if (isPrime(-2) == 0) marks++;
    if (isPrime(2) == 1) marks++;
    if (isPrime(3) == 1) marks++;
    if (isPrime(4) == 0) marks++;
    if (isPrime(27) == 0) marks++;
    if (isPrime(11) == 1) marks++;
    if (isPrime(23) == 1) marks++;
    if (isPrime(10000) == 0) marks++;
    if (isPrime(258) == 0) marks++;
    if (isPrime(7) == 1) marks++;
    if (isPrime(13) == 1) marks++;
    if (isPrime(14) == 0) marks++;
    if (isPrime(-50) == 0) marks++;
    if (isPrime(57) == 0) marks++;
    if (isPrime(99999) == 0) marks++;
    if (isPrime(98) == 0) marks++;
    return marks * 100 / 16; 
}

float testcase_power() {
    float j = 0;
    if (power(2, 3) == 8) j++;
    if (power(2, 0) == 1) j++;
    if (power(5, 3) == 125) j++;
    if (power(3, 3) == 27) j++;
    if (power(10, 2) == 100) j++;
    return j*100/5;
}

#endif 
