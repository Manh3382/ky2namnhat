#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define true 1

int a[100][100];

void tinhMatrix(int a[][100], int n)
{
    int d=0,i,gt = 1;
    int hang = n-1; int cot = n-1;
    while(gt<=n*n)
    {
        for(int i = d; i<=cot; i++)
        {
            a[d][i] = gt++; // gan tu trai sang phai
        }
        for(int i=d+1; i<=hang; i++)
        {
            a[i][cot] = gt++; // gan tu tren xuong duoi
        }
        for(int i=cot-1; i >= d; i--)
        {
            a[hang][i] = gt++; // gan tu phai sang trai
        }
        for(int i=hang-1; i>d; i--)
        {
            a[i][d] = gt++; // gan tu dui len tren
        }
        d++, hang--, cot--; // thu nho xoan oc
    }
}

void xuatMatrix(int a[][100], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
}

void menu()
{
    printf("\t\tMENU\n");
    printf("\t1. Tinh ma tran xoay\n");
    printf("\t2. Hien thi ma tran xoay\n");
    printf("\t3. Ket thuc\n");
}

int main()
{
    int n, chon;

    while(true)
    {
        system("cls");
        menu();
        scanf("%d", &chon);
        switch(chon)
        {
        case 1:
            {
                printf("Nhap n: "); scanf("%d", &n);
                tinhMatrix(a,n);
                break;
            }
        case 2:
            {
                xuatMatrix(a,n);
                break;
            }
        case 3:
            {
                printf("\t\t===BYE===");
                exit(0);
                break;
            }
        default:
            {
                printf("Vui long nhap cac so tu 1->3");
            }
        }
        printf("Nhan phim bat ky de tro ve menu!!!");
        getch();
    }
    return 0;
}
