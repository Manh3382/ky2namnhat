#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define MAX 1000
unsigned a[MAX], b[MAX];
int i,j;
void nhapMang(unsigned a[], int n)
{
    for(i=0; i<n; i++)
    {
        scanf("%u", &a[i]);
    }
}
void value(int a[], int b[], int n)
{
    for(i=0; i<n; i++)
    {
        for(j=i; j<n ; j++)
        {
            if(a[j]== a[i])
                b[i]++;
        }
    }
}

void xuat(int a[], int b[], int n)
{
    int max=1;
    for(i=0; i<n; i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    for(i=0; i<n; i++)
    {
        if(b[i]==max)
            printf("Phan tu %d xuat hien %d lan!\n", a[i], b[i]);
    }
}
int main  ()
{
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    nhapMang(a,n);
    value(a,b,n);
    xuat(a,b,n);

}
