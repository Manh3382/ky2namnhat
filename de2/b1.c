#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int a[MAX];

int main()
{
    int n, x;
    int dem=0;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Nhap so can tim trong day: ");
    scanf("%d", &x);

    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            dem++;
        }
    }

    if(dem==0)
    {
        printf("Khong co so do trong day!!!");
    }
    else
    {
        printf("So do xuat hien %d lan!!!", dem);
    }
    return 0;
}
