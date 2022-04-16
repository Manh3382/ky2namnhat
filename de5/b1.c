#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,m;

    printf("Nhap chieu rong cua hcn: ");
    scanf("%d", &n);
    printf("Nhap chieu dai cua hcn: ");
    scanf("%d", &m);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i==0 || j==0 || i== n-1 || j == m-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
