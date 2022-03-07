#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

// Tinh tich hai ma tra A x B = C
// In ca 3 ma tran ra man hinh
int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
int m, n, p, q;

void nhapMaTranA(int a[MAX][MAX], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void inMaTranA(int a[MAX][MAX], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void nhapMaTranB(int b[MAX][MAX], int p, int q){
	for(int i=0; i<p; i++){
		for(int j=0; j<q; j++){
			scanf("%d", &b[i][j]);
		}
	}
}
void inMaTranB(int b[MAX][MAX], int p, int q){
	for(int i=0; i<p; i++){
		for(int j=0; j<q; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
}
// thuc hien phep nhan
void nhanMaTranC(int a[MAX][MAX], int b[MAX][MAX], int m, int n, int p, int q){
	if(n==p){
		for(int i=0; i<m; i++){
			for(int j=0; j<q; j++){
				for(int k=0; k<n; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
	} else {
		printf("Khong the thuc hien phep nhan!!!\n");
		return ;
	}
}
void inMaTranC(int c[MAX][MAX], int m, int q){
	if(n==p){
		printf("Ma tran C: \n");
		for(int i=0; i<m; i++){
		for(int j=0; j<q; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	}
}

int main() {
	printf("Nhap so hang cua ma tran A: "); scanf("%d", &m);
	printf("Nhap so cot cua ma tran A: "); scanf("%d", &n);
	nhapMaTranA(a,m,n);
	printf("Nhap so hang cua ma tran B: "); scanf("%d", &p);
	printf("Nhap so cot cua ma tran B: "); scanf("%d", &q);
	nhapMaTranB(b,p,q);

    printf("Ma tran A: \n");
	inMaTranA(a,m,n);
	printf("Ma tran B: \n");
	inMaTranB(b,p,q);
	nhanMaTranC(a,b,m,n,p,q);
	inMaTranC(c,m,q);
   return 0;
}
