#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

void nhapMang(int a[MAX], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[MAX], int n){
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}

void tronMang(int a[MAX], int b[MAX], int c[MAX], int a1, int b1){
    int n=0;
    for(int i=0; i<a1; i++){
        c[n] = a[i];
        n++;
    }
    for(int j=0; j<b1; j++){
        c[n] = b[j];
        n++;
    }
}

void sapXep(int a[MAX], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i] < a[j]){
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}

int main () {
    int a[MAX], b[MAX], c[MAX];
    int p, q;
    printf("Nhap so luong phan tu day A: "); scanf("%d", &p);
    nhapMang(a,p);
    printf("Nhap so luong phan tu day B: "); scanf("%d", &q);
    nhapMang(b,q);
    tronMang(a,b,c,p,q);
    int k = p+q;
    sapXep(c,k);
    printf("Day so sau khi sap xep la: ");
    xuatMang(c,k);

}
