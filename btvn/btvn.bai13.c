#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

void Nhap(int a[], unsigned n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

void Xuat(int a[], unsigned n){
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}

void MangDuong(int a[], unsigned n){
	for(int i=0; i<n; i++){
		if(a[i]>0){
			printf("%d ", a[i]);
		}
	}
}

void MangAm(int a[], unsigned n){
	for(int i=0; i<n; i++){
		if(a[i]<0){
			printf("%d ", a[i]);
		}
	}
}

int main() {
	unsigned n;
	int a[MAX];

	printf("Nhap so luong phan tu: ");
	scanf("%u", &n);
	Nhap(a,n);
	printf("Mang vua nhap la: ");
	Xuat(a,n);
	printf("\nMang cac so duong la: ");
	MangDuong(a,n);
	printf("\nMang cac so am la: ");
	MangAm(a,n);

   return 0;
}
