#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i;
int fibonaci(int n)
{
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    if(n<0)
    {
        return -1;
    }
    else if(n==0 || n==1)
    {
        return n;
    }
    else
    {
        for(i=2; i<n; i++)
        {
            f0 = f1;
            f1 = fn;
            fn = f0+f1;
        }
    }
    return fn;
}

int main()
{
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    printf("So thu %d trong day fibonaci la: %d", n, fibonaci(n));
    return 0;
}
