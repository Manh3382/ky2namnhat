#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000
int i;
int a[MAX];

int main ()
{
    int n, x;
    int dem = 0;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    printf("Nhap day so: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nNhap so X: ");
    scanf("%d", &x);
    for(i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            dem++;
        }
    }

    if(dem==0)
    {
        printf("Khong co so X trong day!!!");
    }
    else
    {
        printf("So X xuat hien %d lan!", dem);
    }
    return 0;
}
