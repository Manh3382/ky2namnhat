#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

int i, j;
int a[MAX];
void nhapMang(int a[MAX], int n){
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}

int tichCacSoAm(int a[MAX], int n){
    int mul = 1;
    for(i=0; i<n; i++){
        if(a[i]<0){
            mul *= a[i];
        }
    }
    return mul;
}

int main (){
    int n;
    printf("Nhap so luong phan tu cua day: "); scanf("%d", &n);
    printf("Vui long nhap day: "); nhapMang(a,n);
    printf("Tich cac phan tu am trong day la: %d ", tichCacSoAm(a,n));

}
