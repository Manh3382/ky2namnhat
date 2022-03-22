#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
float a[MAX];
int i,j;

void nhapMang(float a[], int n)
{
    for(i=0; i<n; i++)
    {
        scanf("%f", &a[i]);
    }
}

void inMang(float a[], int n)
{
    for(i=0; i<n; i++)
    {
        printf("%.1f\t", a[i]);
    }
}

void value(float a[], int n)
{
    int sum=0, dem=0;
    int sumd=0, suma=0;
    int demd=0, dema=0;
    for(i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            demd++;
            sumd+=a[i];
        }
        if(a[i]<0)
        {
            dema++;
            suma+=a[i];
        }
        dem++;
        sum+=a[i];
    }
    printf("\nDay co %d so duong va %d so am! \n", demd, dema);
    printf("Trung binh cong cac so duong va am lan luot la: %.1f va %.1f \n", (float)sumd/demd, (float)suma/dema);
    printf("Trung binh cong cua ca day la: %.1f", (float)sum/dem);
}
int main ()
{
    int n;
    printf("Nhap so luong phan tu trong day: ");
    scanf("%d", &n);
    nhapMang(a,n);
    inMang(a,n);
    value(a,n);
}
