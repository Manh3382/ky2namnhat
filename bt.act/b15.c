#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i;
int kiemTraSoChinhPhuong(int n)
{
    if(sqrt(n) == (int)sqrt(n))
        return 1;
    return 0;
}

void LietKeChinhPhuong(int n)
{
    int dem=0;
    for(int i=2; i<n; i++) // vì hiển thị ra các số nhỏ hơn n nên ta phải chạy từ 2
    {
        if(kiemTraSoChinhPhuong(i)==1){
           printf("%d\t", i);
            dem++;
        }
    }
    printf("\nCo %d so chinh phuong be hon n!\t", dem);
}

int main()
{
    int n;
    printf("Nhap gia tri cua n: "); scanf("%d", &n);
    LietKeChinhPhuong(n);
    return 0;
}
