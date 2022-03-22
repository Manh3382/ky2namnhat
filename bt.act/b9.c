#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int i;
int a[MAX];

void nhapMang(int a[MAX], int n){
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}

int timMax(int a[MAX], int n){
    int max = a[0];
    for(i=1; i<n; i++){
        if(max<a[i]){
            max = a[i];
        }
    }
   return max;
}
void vitriMax(int a[MAX], int n){
    int max = timMax(a,n);
    printf("Vi tri: ");
    for(i=0; i<n; i++){
        if(a[i]==max){
            printf("%d", i+1);
        }
    }
}

int timMin(int a[MAX], int n){
    int min = a[0];
    for(i=1; i<n; i++){
        if(min>a[i]){
            min = a[i];
        }
    }
   return min;
}
void vitriMin(int a[MAX], int n){
    int min = timMin(a,n);
    printf("Vi tri: ");
    for(i=0; i<n; i++){
        if(a[i]==min){
            printf("%d", i+1);
        }
    }
}

int main(){
    int n;
    printf("Nhap so luong phan tu: "); scanf("%d", &n);
    nhapMang(a,n);
    printf("\nPhan tu lon nhat la: %d ", timMax(a,n));
    vitriMax(a,n);
    printf("\nPhan tu nho nhat la: %d ", timMin(a,n));
    vitriMin(a,n);
}
