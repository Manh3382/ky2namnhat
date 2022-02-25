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

void sapxep(double a[], unsigned n){
	for(int i = 0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if(a[i]>a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int main() {
	unsigned n;
	printf("Nhap so luong phan tu: "); scanf("%u", &n);
	double a[MAX];
	printf("Nhap day so: ");
	nhapMang(a,n);
	xuatMang(a,n);
	sapxep(a,n);
	printf("\n");
	xuatMang(a,n);
   return 0;
}

