#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

// Tim ma tran chuyen vi va in ra man hinh
int a[MAX][MAX];
int m, n;

void NhapMtA(int a[MAX][MAX], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}

// ma tran chuyen vi
void XuatMtA(int a[MAX][MAX], int n, int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
}

int main() {
	printf("Nhap so luong hang: "); scanf("%d", &m);
	printf("Nhap so luong cot: "); scanf("%d", &n);
	NhapMtA(a,m,n);
	XuatMtA(a,n,m);
   return 0;
}

