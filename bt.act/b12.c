#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main ()
{
    int month, year, day;
    printf("Vui long nhap thang va nam: ");
    scanf("%d%d", &month, &year);
    if(month>=1 && month<=12)
    {
        switch(month)
        {
        case 2:
            if(year%400==0 || (year%100!=0 && year%4==0))
                day=29;
            else
                day=28;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            day = 30;
            break;
        }
        //int day=21;
        printf("Thang %d nam %d co %d ngay\n", month, year, day);
    }
    else
        printf("Thang ban nhap khong hop le!");
    getch();

}
