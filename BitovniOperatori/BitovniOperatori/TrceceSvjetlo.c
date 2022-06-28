#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main()
{
    int n, i;
    uint8_t svj = 0;
    
    scanf("%d", &n);
    
    for (i = 0; i < n-1; ++i){
        if (svj == 0){
            svj = 1;
        }
        else{
            svj <<= 1;
        }
    }
    
    printf("%d", svj);
    return 0;
}
