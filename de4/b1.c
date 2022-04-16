#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int ucln(unsigned a, unsigned b)
{
    if(a==0 || b==0)
    {
        return a+b;
    }
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    return a;
}

int bcnn(unsigned a, unsigned b)
{
    int x=a*b;
    if(a==0 || b==0)
    {
        return a+b;
    }
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    return x/a;
}
int main()
{
    unsigned a,b;
    printf("Nhap vao so nguyen duong a: "); scanf("%u", &a);
    printf("\nNhap vao so nguyen duong b: "); scanf("%u", &b);
    printf("\nUoc chung lon nhat cua hai so a va b la: %d ", ucln(a,b));
    printf("\nBoi chung nho nhat cua hai so a va b la: %d", bcnn(a,b));
}
