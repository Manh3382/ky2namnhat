#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int i, j;

int main()
{
    int cr,cd;
    printf("Nhap so hang va so cot: ");
    scanf("%d%d", &cr, &cd);
    for( i=0; i<cr; i++) //dòng
    {
        for( j=0; j<cd; j++)  //cột
        {
            if(i==0 || j==0 || i == cr-1 || j == cd-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
