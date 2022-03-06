#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000
#define true 1
#define false 0

int a[MAX][MAX];
/*
	a. Kiem tra xem ma tran vua nhap co phai ma tran don vi khong
	b. Tinh tong cac phan tu nam tren hang x, x nhap tu ban phim (1<=x<=n)
	c. Tinh tich cac phan tu nam tren cot y, y nhap tu ban phim (1<=y<=n)
	d. Kiem tra xem tren hang thu i co chua so nguyen to hay khong? (i = 1...n)
		va hang nao co chua nhieu so nguyen to nhat
	e. Ma tran tren chua bao nhieu so duong va bao nhieu so am
*/
void nhapMaTran(int a[MAX][MAX], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}

void xuatMaTran(int a[MAX][MAX], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
// a.
int kTraMaTranDonVi(int a[MAX][MAX], int n){
	for(int i=0; i<n; i++){
		if(a[i][i] != 1){
			return 0;
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i][j] != 0 || a[j][i] != 0){
				return 0;
			}
		}
	}
	return 1;
}
// b.
int tongHangx(int a[MAX][MAX], int n, int x){
		int tx = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if((i+1)==x){
					tx += a[i][j];
				}
			}
		}
	return tx;
}
// c.
int tichCoty(int a[MAX][MAX], int n, int y){
		int ty = 1;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if((j+1)==y){
					ty *= a[i][j];
				}
			}
		}
	return ty;
}
// .d
bool laSoNguyenTo(int n){
	if(n<=1)
		return false;
	for(int i=2;i<n;i++){
		if(n%i==0)
			return false;
	return true;
	}
}

int xetSoNguyenTo(int a[MAX][MAX], int n){
	int dem = 0;
	int demmax = 0;
	int vitri = 0;
	for(int i=0; i<n; i++){
		dem =0;
		for(int j=0; j<n; j++){
				if(laSoNguyenTo(a[i][j]))
				dem ++;
			}
		printf("Hang thu %d co %d so nguyen to.\n", i+1, dem);
		
		if(demmax < dem){
			demmax = dem;
			vitri = i+1;
		}
	}
	switch (demmax){
		case 0: 
			printf("Khong hang nao co SNT.\n");
			break;
		default:
			printf("Hang %d co nhieu SNT nhat.\n", vitri);
	}
}
// e.
int soDuong(int a[MAX][MAX], int n){
	int ssd = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]>0){
				ssd ++;
			}
		}
	}
	return ssd;
}
int soAm(int a[MAX][MAX], int n){
	int ssa = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]<0){
				ssa ++;
			}
		}
	}
	return ssa;
}



int main() {
	int n, x, y;
	printf("Nhap chi so ma tran: "); scanf("%d", &n);
	nhapMaTran(a,n);
	xuatMaTran(a,n);
// a. Kiem tra ma tran do vi
	if(kTraMaTranDonVi(a,n) == 0){
		printf("Day khong phai la ma tran don vi!!!\n");
	}
	if(kTraMaTranDonVi(a,n) == 1){
		printf("Day la ma tran don vi!!!\n");
	}
// b. Tinh tong cac so nam tren hang x
	printf("Nhap hang ban muon tinh tong: \n"); scanf("%d", &x);
	printf("Tong cua hang do la: %d \n", tongHangx(a,n,x));
// c. Tinh tich cac so nam tren cot y
	printf("Nhap cot ban muon tinh tich: \n"); scanf("%d", &y);
	printf("Tich cua hang do la: %d \n", tichCoty(a,n,y));
// d. Kiem tra hang i co chua snt hay khong, hang nao chua nhieu snt nhat
	xetSoNguyenTo(a,n);
// e. Bao nhieu so duong va bao nhieu so am
	printf("Ma tran tren chua %d so duong \n", soDuong(a,n));
	printf("Ma tran tren chua %d so am \n", soAm(a,n));
   return 0;
}

