#include <stdio.h>
#include <stdlib.h>

// sau bao lâu thì số tiền gấp rưỡi ban đầu (lãi kép)

int main(){
    double x = log(1.5)/log(1+0.8/100); // tiền tương lai = tiền hiện tại x (1 + a)^n; a là %, n là số chu kì
    int a = ceil(x); // dùng round để làm tròn số lên
    // round: hàm làm tròn
    // ceil: hàm làm tròn lên
    printf("It nhat sau %d thang thi so tien gap ruoi ban dau!", a);
    return 0;
}
