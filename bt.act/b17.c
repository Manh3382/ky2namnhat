#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

int i,j;
int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];

void nhapMang(int a[][MAX], int n, int m)
{
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void inMang(int a[][MAX], int n, int m)
{
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
}

void sol(int a[][MAX], int b[][MAX], int c[][MAX], int n, int m)
{
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main()
{
    int n,m;
    printf("Nhap so hang va so cot ma tran A: "); scanf("%d%d", &n, &m);
    nhapMang(a,n,m);
    inMang(a,n,m);
    printf("\nNhap so hang va so cot ma tran B: "); scanf("%d%d", &n, &m);
    nhapMang(b,n,m);
    inMang(b,n,m);
    printf("\nMa tran C la: \n");
    sol(a,b,c,n,m);
    inMang(c,n,m);

}
