#include <stdio.h>
#include <stdlib.h>

/*
 - Tim UCLN va BCNN
*/

int ucln(unsigned a, unsigned b){
    if(a==0 || b==0){
        return a+b;
    }
    while (a!=b){
        if(a>b){
            a-=b;
        }else{
            b-=a;
        }
    }
    return a;
}

int bcnn(unsigned a, unsigned b){
    int x = a*b;
    if(a==0 || b==0){
        return a+b;
    }
    while (a!=b){
        if(a>b){
        a-=b;
        }else{
        b-=a;
        }
    }
    return x/a;
}
int main(){
    unsigned a, b;
    printf("Nhap vao so thu nhat: "); scanf("%u", &a);
    printf("Nhap vao so thu hai: "); scanf("%u", &b);
    printf("Uoc chung lon nhat la: %u", ucln(a,b));
    printf("\nBoi chung nho nhat la: %u", bcnn(a,b));
}

