#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float a, b, c, d, e, f, D, Dx, Dy;
	printf("Nhap a: "); scanf("%f", &a);
	printf("Nhap b: "); scanf("%f", &b);
	printf("Nhap c: "); scanf("%f", &c);
	printf("Nhap d: "); scanf("%f", &d);
	printf("Nhap e: "); scanf("%f", &e);
	printf("Nhap f: "); scanf("%f", &f);
	D = a*e - d*b;
	Dx = c*e - f*b;
	Dy = a*f - d*c;
	
	if(D==0){
		if(Dx==0 && Dy==0){
			printf("He phuong trinh co vo so nghiem!");
		}else {
			printf("He phuong trinh vo nghiem!");
		}
	}else {
		printf("He phuong trinh co nghiem duy nhat! x = %.2f ; y = %.2f", (Dx/D), (Dy/D));
	}
	
   return 0;
}

