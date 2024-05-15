#include"function.h"
#include<math.h>
#include<stdlib.h>
int main(){
    double n;
    scanf("%lf",&n);
    if((abs(n)-n)==0){
        printf("%d",factorial((int)n));
    }
    else{
        printf("-1");
    }
    
}