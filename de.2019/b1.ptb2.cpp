#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float a, b, c, d;
	scanf("%f%f%f", &a, &b, &c);
	d = b*b - 4*a*c;
	if(d>0){
		printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f ; x2 = %.2f ", ((-b-sqrt(d))/(2*a)), (-b+sqrt(d))/(2*a));
	} else if (d == 0){
		printf("Phuong trinh co nghiem kep la: x1 = x2 = %.2f", -b/(2*a));
	} else {
		printf("Phuong trinh vo nghiem");
	}
   return 0;
}

