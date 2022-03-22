#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int i;
int a[MAX];

void nhapMang(int a[MAX], int n)
{
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}

float TBC(int a[MAX], int n)
{
    int sum=0;
    int count=0;
    for(i=0; i<n; i++)
    {
        if(a[i]>5 && a[i]%2==0)
        {
            sum += a[i];
            count++;
        }
    }
    return sum/count;
}

int main()
{
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    nhapMang(a,n);
    printf("Trung binh cong: %.2f", TBC(a,n));
}
