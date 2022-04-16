#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 1000
#define true 1
void nhapMang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}



void ghepHaiDaySo(int a[], int b[], int c[], int m, int n)
{
     int a1=0, b1=0;
    for(int i=0; i<m+n; i++)
    {
        if(a1<m&&b1<n)
        {
            if(a[a1]<b[b1])
            {
                c[i]=a[a1];
                a1++;
            }
            else
            {
                c[i]=b[b1];
                b1++;
            }
        }
       else
        {
            if(b1==n)
            {
                c[i]=a[a1];
                a1++;
            }
            if(a1==m)
            {
                c[i]=b[b1];
                b1++;
            }
        }
    }
}

void menu()
{
    printf("\t\tMENU\n");
    printf("\t1. Nhap 2 day so\n");
    printf("\t2. Ghep hai day so\n");
    printf("\t3. In 3 day so\n");
    printf("\t4. Ket thuc\n");
}

int main()
{
    int n,m;
    int a[100],  b[100],  c[100];

    while(true)
    {
        system("cls");
        menu();
        int chon;
        scanf("%d", &chon);
        switch(chon)
        {
        case 1:
        {
            printf("Nhap so luong phan tu day A: ");
            scanf("%d", &m);
            printf("Nhap day so A: ");
            nhapMang(a,m);
            printf("Nhap so luong phan tu day B: ");
            scanf("%d", &n);
            printf("Nhap day so B: ");
            nhapMang(b,n);
            break;
        }
        case 2:
        {
            ghepHaiDaySo(a,b,c,m,n);
            printf("\n\n\tDa ghep xong!\n");
            break;
        }
        case 3:
        {
            printf("\nDay so A: ");
            xuatMang(a,m);
            printf("\nDay so B: ");
            xuatMang(b,n);
            printf("\nDay so C: ");
            xuatMang(c,m+n);
            break;
        }
        case 4:
        {
            exit(0);
            break;
        }
        default:
        {
            printf("Hay nhap cac  so tu 1->4!!!");
        }
        }
        printf("\nNhan phim bat ky de tro lai menu");
        getch();
    }
}
