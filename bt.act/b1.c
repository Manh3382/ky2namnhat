#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int a[MAX];
int i;

int main()
{
    int n, x;
    int dem=0;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Nhap so X: ");
    scanf("%d", &x);
    for(i=0; i<n; i++)
    {
        if(x==a[i])
        {
            dem++;
        }
    }

    if(dem==0)
    {
        printf("Khong co so %d trong day!", x);
    }
    else
    {
        printf("Co so %d trong day va xuat hien %d lan!", x, dem);
    }
    return 0;
}
