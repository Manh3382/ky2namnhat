#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ktraSCP(int n)
{
    if(sqrt(n) == (int)sqrt(n))
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    int dem =0;
    do
    {
        printf("Nhap so n: ");
        scanf("%d", &n);
    }while(n<0);

    for(int i=1; i<n; i++)
    {
        if(ktraSCP(i) == 1)
        {
            dem++;
            printf("%d ", i);
        }
    }
    printf("\nCo %d so chinh phuong!!", dem);

}
