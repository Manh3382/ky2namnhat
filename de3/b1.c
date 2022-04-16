#include <stdlib.h>
#include <stdio.h>
#define true 1
#define false 0

int ktraSNT(int n)
{
    if(n<=1) return 0;
    for(int i=2; i<= sqrt(n); i++)
    {
        if(n%i==0) return 0;
    }
        return 1;
}
int main ()
{
    int n;
    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    }while(n<1);

    for(int i=2; i<=n; i++)
    {
        if(ktraSNT(i))
        {
            printf("%d ", i);
        }
    }
}
