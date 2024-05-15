#include<stdio.h>
#include<math.h>
int factorial(int n){
    if(n<0) return -1;
    if(n==0) return 1;
    else return n*factorial(n-1);
}    
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n > 1)
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    else if (n < 0)
    {
        return -1;
    }
}
int power(int i, int j){
    if(j==1) return i;
    else if(j==0) return 1;
    else if (j<0) return -1;
    else return power(i,j-1);
}

