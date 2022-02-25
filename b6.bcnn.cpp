#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bcnn(unsigned a, unsigned b){
	int x = a*b;
	if(a==0 || b==0){
		return a+b;
	} 
	while (a!=b){
		if(a>b){
			a-=b;
		}else {
			b-=a;
		}
	}
	return x/a;
}

int main() {
	unsigned a,b;
	printf("Nhap vao so thu nhat: "); scanf("%u", &a);
	printf("Nhap vao so thu hai: "); scanf("%u", &b);
	printf("Boi chung nho nha la: %u", bcnn(a,b));
   return 0;
}

