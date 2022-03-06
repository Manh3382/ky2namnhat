#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	printf("Nhap gia tri cua n: "); scanf("%d", &n);
	int gt=1;
	
	for(int i = 1; i<=n; i++){
		gt = gt * i;
	}
	
	printf("%d! = %d", n, gt);
   return 0;
}

