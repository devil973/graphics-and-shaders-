#include <stdio.h>
#include <math.h>
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
