#include"function.h"
float testcase_prime(){
    float marks = 0;
    if(isPrime(-2)==-1) marks++;
    if(isPrime(2)==1) marks++;
    if(isPrime(3)==1) marks++;
    if(isPrime(4)==0) marks++;
    if(isPrime(27)==0) marks++;
    if(isPrime(11)==1) marks++;
    if(isPrime(23)==1) marks++;
    if(isPrime(10000)==0) marks++;
    if(isPrime(258)==0) marks++;
    if(isPrime(7)==1) marks++;
    if(isPrime(13)==1) marks++;
    if(isPrime(14)==0) marks++;
    if(isPrime(-50)==-1) marks++;
    if(isPrime(57)==1) marks++;
    if(isPrime(99999)==0) marks++;
    if(isPrime(98)==0) marks++;
    
    if(isPrime(50)==1) marks++;
    
    return marks*100/17;
 }
 float testcase_factorial(){
    float marks = 0;
    if(factorial(-2)==-1) marks++;
    if(factorial(2)==2) marks++;
    if(factorial(3)==6) marks++;
    if(factorial(4)==24) marks++;
    if(factorial(7)==5040) marks++;
    if(factorial(8)==40320) marks++;
    if(factorial(9)==362880) marks++;
    if(factorial(-50)==-1) marks++;
    
    
    return marks*100/8;
 }
float testcase_power() {
    int j = 0;
    if (power(2, 3) == 8) j++;
    if (power(2, 1) == 2) j++;
    if (power(2, 4) == 16) j++;
    if (power(25, 4) == 390625) j++;
    if (power(5, 6) == 15625) j++;
    if (power(5, -6) == -1) j++;
    if (power(55, 5) == 503284375) j++;
    if (power(2.3, 0) == 1) j++;
    if (power(-23, 5) == -6436343) j++;
    if (power(2, 3) == 8) j++;
    if (power(7, 6) == 117649) j++;
    if (power(-10, 8) == 100000000) j++;
    if (power(45, 3) == 91125) j++;
    if (power(-25, 4) == 390625) j++;
    if (power(57, 6) == 34296447249) j++;
    if (power(76, 6) == 192699928576) j++;
    if (power(55, 5) == 503284375) j++;
    if (power(23, 9) == 1801152661463) j++;
    if (power(2, 23) == 8388608) j++;
    return j * 100 / 19;
}

int testcase_fibonacci(){
    int marks=0;
    if(fibonacci(1)==1)marks++;
    if(fibonacci(0)==0)marks++;
    if(fibonacci(2)==1)marks++;
    if(fibonacci(3)==2)marks++;
    if(fibonacci(4)==3)marks++;
    if(fibonacci(5)==5)marks++;
    if(fibonacci(6)==8)marks++;
    if(fibonacci(7)==13)marks++;
    if(fibonacci(-1)==-1)marks++;
    if(fibonacci(-2)==-1)marks++;
    if(fibonacci(-3)==-1)marks++;
    if(fibonacci(-4)==-1)marks++;
    if(fibonacci(3.3)==-1)marks++;
    if(fibonacci(4.5)==-1)marks++;
    if(fibonacci(5.6)==-1)marks++;
    if(fibonacci(6.8)==-1)marks++;
    if(fibonacci(7.3)==-1)marks++;
    if(fibonacci(-0.8)==-1)marks++;
    if(fibonacci(8)==21)marks++;
    if(fibonacci(9)==34)marks++;
    return marks*5;
}
