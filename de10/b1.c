#include <stdio.h>
#include <stdlib.h>

void nhapMang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void timMax(int a[], int n)
{
    int dem=0;
    int max = a[0];
    for(int i=1; i<n ;i++)
    {
        if(a[i]> max)
        {
            max = a[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i] == max)
        {
            dem++;
        }
    }
    printf("Gia tri lon nhat trong day la: %d va xuat hien %d lan!", max, dem);
}

void timMin(int a[], int n)
{
    int dem=0;
    int min = a[0];
    for(int i=1; i<n ;i++)
    {
        if(a[i]< min)
        {
            min = a[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i] == min)
        {
            dem++;
        }
    }
    printf("\nGia tri lon nhat trong day la: %d va xuat hien %d lan!", min, dem);
}
int main()
{
    int a[1000], n;
    printf("Nhap so luong phan tu cua day: "); scanf("%d", &n);
    nhapMang(a,n);
    timMax(a,n);
    timMin(a,n);

}
