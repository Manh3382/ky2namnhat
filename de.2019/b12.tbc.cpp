#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

void nhapMang(double a[], unsigned n){
	for(int i = 0; i<n; i++){
		scanf("%lf", &a[i]);
	}
}

void xuatMang(double a[], unsigned n){
	for(int i = 0; i<n; i++){
		printf("%.0lf ", a[i]);
	}
}

void dsd(double a[], unsigned n){
	int demd = 0;
	double tongd = 0;
	for(int i = 0; i<n; i++){
		if(a[i]>0){
			demd++;
			tongd += a[i];
		}
	}
	double tbcd = tongd/demd;
	printf("\nTrung binh cong cac so duong la: %.2lf", tbcd);
}

void dsa(double a[], unsigned n){
	int dema = 0;
	double tonga = 0;
	for(int i = 0; i<n; i++){
		if(a[i]<0){
			dema++;
			tonga += a[i];
		}
	}
	double tbca = tonga/dema;
	printf("\nTrung binh cong cac so am la: %.2lf", tbca);
}

int main() {
	unsigned n;
	printf("Nhap so luong phan tu: "); scanf("%u", &n);
	double a[MAX];
	printf("Nhap day so: ");
	nhapMang(a,n);
	xuatMang(a,n);
	dsd(a,n);
	dsa(a,n);
   return 0;
}

