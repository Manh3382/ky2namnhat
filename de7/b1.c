#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void nhapMang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void sobe(int a[], int n, int x)
{
    int dem=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]<x)
        {
            dem++;
            printf("%d ", a[i]);
        }
    }
    printf("\nCo %d so be hon x trong day!", dem);
}

void solon(int a[], int n, int x)
{
    int dem=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>x)
        {
            dem++;
            printf("%d ", a[i]);
        }
    }
    printf("\nCo %d so lon hon x trong day!", dem);
}

int main()
{
    int a[1000], n, x;
    printf("Nhap so luong phan tu trong day: "); scanf("%d", &n);
    nhapMang(a,n);
    printf("Nhap so x: "); scanf("%d", &x);
    printf("Cac so trong day be hon x la: ");
    sobe(a,n,x);
    printf("\n\nCac so trong day lon hon x la: ");
    solon(a,n,x);
}
