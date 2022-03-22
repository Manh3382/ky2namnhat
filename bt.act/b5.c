#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
/* Nhập vào một dãy n bất kì từ bàn phím:
    - Sắp xếp dãy số theo chiều tăng dần
    - In ra màn hình dãy số ban đầu và dãy số đã sắp xếp
*/
int i, j; int a[MAX];
void nhapMang(int a[MAX], int n){
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}

void inMang(int a[MAX], int n) {
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}

void sapXep(int a[MAX], int n){
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(a[i]>a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu: "); scanf("%d", &n);
    nhapMang(a,n);
    printf("Day so ban dau: \n");
    inMang(a,n);
    printf("\nDay so sau khi sap xep la: \n");
    sapXep(a,n);
    inMang(a,n);
}
