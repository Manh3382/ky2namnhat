#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	unsigned int n;
	printf("Nhap gia tri cua n: "); scanf("%u", &n);
	int gt = 1;
	double S = 0;
	
	for(int i = 1; i<=n; i++){
		gt *= i;
		
		S += 1.0/gt;
	}
	
	//printf("%d! = %d", n, gt);
	printf("%.5lf", S);
   return 0;
}

