#include <stdio.h>
#include <stdlib.h>

int bcnn(int a, int b)
{
    int x=a*b;
    if(a==0 || b==0)
        return a+b;
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        if(a<b)
        {
            b-=a;
        }
    }
    return x/a;
}

int ucln(int a, int b)
{
    if(a==0 || b==0)
    return a+b;
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        if(a<b)
        {
            b-=a;
        }
    }
    return a;
}
int main()
{
    int a,b;
    printf("Nhap hai so a va b: ");
    scanf("%d%d", &a, &b);
    printf("Boi chung nho nhat la: %d ", bcnn(a,b));
    printf("\nUoc chung lon nhat la: %d", ucln(a,b));
    return 0;
}
