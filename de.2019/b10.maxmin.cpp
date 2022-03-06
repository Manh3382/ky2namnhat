#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

void nhapMang(double a[], unsigned n){
	for(int i = 0; i<n; i++){
		printf("Vui long nhap phan tu thu %d : ", i+1);
		scanf("%lf", &a[i]);
	}
}

void xuatMang(double a[], unsigned n){
	for(int i = 0; i<n; i++){
		printf("Phan tu thu %d la: %.3lf \n", i+1, a[i]);
	}
}

double timMax(double a[], unsigned n){
	double max = a[0];
	for(int i = 1; i< n; i++){
		if(max<a[i]){
			max = a[i];
		}
	}
	return max;
}
double timMin(double a[], unsigned n){
	double min = a[0];
	for(int i = 1; i< n; i++){
		if(min>a[i]){
			min = a[i];
		}
	}
	return min;
}

void vitriMax(double a[], unsigned n){
	double max = timMax(a,n);
	printf("Vi tri cua phan tu lon nhat la: ");
	for(int i = 0; i<n; i++){
		if(a[i]==max){
			printf("%d", i+1);
		}
	}
}
void vitriMin(double a[], unsigned n){
	double min = timMin(a,n);
	printf("Vi tri cua phan tu lon nhat la: ");
	for(int i = 0; i<n; i++){
		if(a[i]==min){
			printf("%d", i+1);
		}
	}
}

int main() {
	unsigned int n;
	printf("Nhap so luong phan tu: "); scanf("%u", &n);
	double a[MAX];
	printf("Nhap day so: \n");
	nhapMang(a, n);
	printf("\n");
	printf("Day la day so ban vua nhap: \n");
	xuatMang(a, n);
	printf("\n");
	printf("Gia tri lon nhat: %.3lf\n", timMax(a,n)); 
	vitriMax(a,n);
	printf("\n");
	printf("Gia tri nho nhat: %.3lf\n", timMin(a,n));
	 vitriMin(a,n);

	
   return 0;
}

