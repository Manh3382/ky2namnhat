
#include<stdio.h>
#include<stdlib.h>

void xuatmatran(int a[][50],int n,int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

void docdulieutufile(int a[][50],int b[][50],int *n,int *m)
{
    FILE*f = fopen("MA_TRAN.txt","r");
    fscanf(f,"%d%d\n",n,m);
    char str1[20],str2[20];
    fscanf(f,"%s\n",str1);
    for(int i=0; i<*n; i++)
    {
        for(int j=0; j<*m; j++)
        {
            fscanf(f,"%d",&a[i][j]);
        }
        fscanf(f,"\n");
    }
    xuatmatran(a,*n,*m);
    fscanf(f,"%s\n",str2);
    for(int i=0; i<*n; i++)
    {
        for(int j=0; j<*m; j++)
        {
            fscanf(f,"%d",&b[i][j]);
        }
        fscanf(f,"\n");
    }
    xuatmatran(b,*n,*m);
    fclose(f);
}

void tong2matran(int a[][50],int b[][50],int n,int m)
{
    int c[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    FILE*f = fopen("MA_TRAN.txt","a"); //Ghi ma trận C vào cuối File
    char name[20];
    printf("\nNhap ten ma tran: ");
    fflush(stdin);
    gets(name);
    fprintf(f,"\n%s\n",name);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            fprintf(f,"%d\t",c[i][j]);
        }
        fprintf(f,"\n");
    }
    fclose(f);
    printf("\nGhi Thanh Cong!");
}

void menu()
{
    printf("\n1. Doc tep ma tran A, B tu tep");
    printf("\n2. Tinh ma tran C va ghi bo sung vao cuoi tep");
    printf("\n3. Ket thuc");
}
void taofilerog()
{
    FILE *f = fopen("MA_TRAN.txt","r");
    fclose(f);
}


int main()
{
    int a[50][50],b[50][50];
    int n,m;
    do
    {
        int luachon = 0;
        menu();
        printf("\nLua chon cua ban: ");
        scanf("%d",&luachon);
        if(luachon == 1)
        {
            docdulieutufile(a,b,&n,&m);
            continue;
        }
        if(luachon == 2)
        {
            tong2matran(a,b,n,m);
            continue;
        }
        if(luachon == 3)
        {
            return 0;
        }
    }
    while(1);

    return 0;
}
