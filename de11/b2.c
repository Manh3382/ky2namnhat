#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define true 1

void nhapMatrix(int a[][100], int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void xuatMatrix(int a[][100], int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
}

void sol(int a[][100], int b[][100], int c[][100], int n, int p, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int k=0; k<p; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void menu()
{
    printf("\t\tMENU\n");
    printf("\t1. Nhap 2 ma tran\n");
    printf("\t2. Tinh tich 2 ma tran\n");
    printf("\t3. Hien thi 3 ma tran\n");
    printf("\t4. Ket thuc\n");
}

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int n, m, p;
    printf("kkk");
    int chon;
    while(true)
    {
        system("cls");
        menu();
        scanf("%d", &chon);
        switch(chon)
        {
        case 1:
        {
            printf("Nhap so hang va so cot cua ma tran A: ");
            scanf("%d%d", &n, &p);
            nhapMatrix(a,n,p);
            printf("Nhap so hang va so cot cua ma tran B: ");
            scanf("%d%d", &p, &m);
            nhapMatrix(b,p,m);
            break;
        }
        case 2:
        {
            sol(a,b,c,n,p,m);
            printf("Da tinh xong!!!\n");
            break;
        }
        case 3:
        {
            printf("Ma tran A: \n");
            xuatMatrix(a,n,p);
            printf("Ma tran B: \n");
            xuatMatrix(b,p,m);
            printf("Ma tran C: \n");
            xuatMatrix(c,n,m);
            break;
        }
        case 4:
        {
            printf("\t\t===BYE===");
            exit(0);
            break;
        }
        default:
        {
            printf("Vui long nhap cac so tu 1->4!!!");
        }
        }
        printf("\nNhan phim bat ky de tro ve menu ^^");
        getch();
    }
    return 0;
}
