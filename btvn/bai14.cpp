#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

int a[MAX][MAX];

int main() {
	int n;
	scanf("%d", &n);
    int d = 0, i, gt = 1;
    int hang = n - 1, cot = n - 1;
    while(gt<=n*n){        
        for(i = d; i <= cot; i++) {          
            a[d][i] = gt++; // gan tu trai sang phai            
        }       
        for(i = d+1; i <= hang; i++){            
            a[i][cot] = gt++; // gan tu tren xuong duoi
        }       
        for(i = cot-1; i>=d ; i--){         
            a[hang][i]=gt++; // tu phai sang trai
        }       
        for(i = hang-1; i>d ; i--){         
            a[i][d] = gt++; // tu duoi len  
        }       
        d++; hang--; cot--;     // thu nho xoan oc      
    }
    
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
   return 0;
}


