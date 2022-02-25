#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	for(int i=1; i<n;i++){
		if(n%i==0){
			printf("Uoc so cua n la: %d \n", i);
		}
	}
   return 0;
}

