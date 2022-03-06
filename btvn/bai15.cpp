#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

int a[MAX];
void NhapMang(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

int TichAm(int a[], int n){
	int mul = 1;
	for(int i=0; i<n; i++){
		if(a[i]< 0){
			mul *= a[i];
		}
	}
	return mul;
}

int main() {
	int n;
	printf("Nhap vao so luong phan tu: "); scanf("%d", &n);
	NhapMang(a,n);
	printf("Tich cac phan tu am la: %d ", TichAm(a,n));
   return 0;
}

