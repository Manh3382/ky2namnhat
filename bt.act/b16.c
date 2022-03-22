#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 1000
int i,j;
int a[MAX][MAX];

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

int max(int a[][MAX], int n, int m)
{
    int max = a[0][0];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i][j]>max)
                max = a[i][j];
        }
    }
    return max;
}
int min(int a[][MAX], int n, int m)
{
    int min = a[0][0];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i][j]<min)
                min = a[i][j];
        }
    }
    return min;
}

int main ()
{
    int n,m;
    printf("Nhap vao so hang va so cot: ");
    scanf("%d%d", &n, &m);
    nhapMang(a,n, m);
    inMang(a,n, m);
    printf("\nGia tri lon nhat la: %d", max(a,n,m));
    printf("\nGia tri nho nhat la: %d", min(a,n,m));

    return 0;
}
