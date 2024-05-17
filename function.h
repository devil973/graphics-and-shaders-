#include<stdio.h>
#include<math.h>
#include<ctype.h>
int factorial(int n){
    if(isdigit(n)){
    if(n<0) return -1;
    if(n==0) return 1;
    else return n*factorial(n-1);
}
else return -1
}

int fibonacci(int n){
if(isdigit(n)){

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
else return -1;
}
int power(int i, int j){
    if(isdigit(i)==1&&isdigit(j)==1){
    if(j==1) return i;
    else if(j==0) return 1;
    else if (j<0) return -1;
    else return power(i,j-1);
}
else return -1
}

int isPrime(int n){
  if(isdigit(n)){
  if(n<0) return -1;
  else{
  for(int i = 2; i < n/2; i++){
    if(n%i==0) return 0;
    else continue; 
  }
  return 1;
}
}
else return -1;
}


