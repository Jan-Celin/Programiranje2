#include <stdio.h>
#include <stdint.h>
#include <math.h>

void print(uint32_t bar, int n){
    uint32_t i, printmask;
    
    printmask = pow(2, n-1);
    
    for (i = 0; i < n; ++i){
        if (bar & printmask){
            printf("1");
        }
        else{
            printf("0");
        }
        printmask >>= 1;
    }
    printf("\n");
}

int main(){
    uint32_t n, i, bar = 0, mask;
    
    scanf("%d", &n);
    
    mask = pow(2, n-1);
    for (i = 0; i <= n; ++i){
        print(bar, n);
        bar >>= 1;
        bar |= mask;
    }

    return 0;
}

