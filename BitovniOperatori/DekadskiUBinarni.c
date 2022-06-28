#include <stdio.h>
#include <stdint.h>
#include <math.h>
int main()
{
    int n, k, mask, i;

    scanf("%d\n%d", &n, &k);
    mask = (int) pow(2, k-1);
    
    for (i = 0; i < k; ++i){
        if (n & mask){
            printf("1");
        }
        else{
            printf("0");
        }
        n <<= 1;
    }
    return 0;
}
