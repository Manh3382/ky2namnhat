#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float a, b, c;
	printf("Nhap vao canh a: "); scanf("%f", &a);
	printf("Nhap vao canh b: "); scanf("%f", &b);
	printf("Nhap vao canh c: "); scanf("%f", &c);
	
	if((a+b>c)&&(a+c>b)&&(b+c>a)){
		if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)){
			if(a==b||b==c||a==c){
				printf("Ba canh tao thanh tam giac vuong can");
			}else{
			printf("Ba canh tao thanh tam giac vuong");
			}
		} else if(a==b||a==c||b==c){
			printf("Ba canh tao thanh tam giac can");
		} else if(a==b&&b==c){
			printf("Ba can tao thanh tam giac deu");
		} else {
			printf("Ba canh tao thanh tam giac thuong");
		}
	}else {
		printf("Ba canh khong tao thanh mot tam giac!");
	}
   return 0;
}

