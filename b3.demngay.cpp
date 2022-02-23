#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool checkyear (int year){
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0)){
			return true;
		}
		return false;
	}
int dem(int month, int year){
	switch (month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			if(checkyear(true)){
				return 29;
			}else {
				return 28;
			}
			default :
				printf("Thang ban nhap khong hop le!");
	}
}

int main() {
	int year, month;
	do {
		printf("Nhap nam: "); scanf("%d", &year);
		printf("Nhap thang: "); scanf("%d", &month);
	}while (year < 0|| month <1 || month >12);
	
	printf("Thang %d nam %d co %d ngay", month, year, dem(month,year));
	
   return 0;
}
