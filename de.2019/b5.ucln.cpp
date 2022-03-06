#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ucln(unsigned a, unsigned b){
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
	return a;
}

int main() {
	unsigned a,b;
	printf("Nhap vao so thu nhat: "); scanf("%u", &a);
	printf("Nhap vao so thu hai: "); scanf("%u", &b);
	printf("Uoc chung lon nhat la: %d", ucln(a,b));
	
   return 0;
}
