#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int i, j;
int a[MAX], b[MAX], c[MAX];

void nhapMang(int a[MAX], int n){
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

void inMang(int a[MAX], int n){
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}

void hoanDoi(int a[MAX], int i, int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void sapXep(int a[MAX], int n){
	for(i=n-1; i>0; i--){ // duyệt lần lượt để sắp xếp dãy theo chiều tăng dần
		for(j=0; j<i; j++){
			if(a[j] > a[j+1])
				hoanDoi(a, j, j+1);
		}
	}
}

void xepMang(int a[MAX], int b[MAX], int c[MAX], int n){
	int x=0; int y=0;
	for(i=0; i<n; i++){
		if(a[i]%2==0){
			b[x++] = a[i];
		}else {
			c[y++] = a[i];
		}
	}

	sapXep(b, x);
	sapXep(c, y);
	inMang(b, x);
	inMang(c, y);
}

int main() {
	int n;
	printf("Nhap so luong phan tu: "); scanf("%d", &n);
	nhapMang(a,n);
	xepMang(a, b, c, n);

   return 0;
}
