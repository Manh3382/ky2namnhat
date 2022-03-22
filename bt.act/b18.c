#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
int i,j;

void nhapMangA(int a[][MAX], int n, int p)
{
    for(i=0; i<n; i++)
    {
        for(j=0; j<p; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void nhapMangB(int b[][MAX], int p, int m)
{
    for(i=0; i<p; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", b[i][j]);
        }
    }
}
void inMangC(int c[][MAX], int n, int m)
{
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
}

void sol(int a[][MAX], int b[][MAX], int c[][MAX], int n, int p, int m)
{
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            for(int k=0; k<p; k++)
            {
                c[i][j]+= a[i][k] * b[k][j];
            }
        }
    }
}

int main ()
{
    int n,m,p;
    printf("Nhap so hang va so cot cua ma tran A: "); scanf("%d%d", &n, &p);
    nhapMangA(a,n,p);
    printf("Nhap so hang va so cot cua ma tran B: "); scanf("%d%d", &p, &m);
    nhapMangA(b,p,m);
    printf("Ma tran C:\n");
    sol(a,b,c,n,p,m);
    inMangC(c,n,m);


}
