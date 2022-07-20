#include <stdio.h>
#include <string.h>
#include <ctype.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main() {
    int a, b, c, n, i, ai, bi;
    int posude[3];
    
    scanf("%d %d %d\n%d", &a, &b, &c, &n);
    posude[0] = a;
    posude[1] = b;
    posude[2] = c;
    
    for (i = 0; i < n; ++i){
        scanf(" %d %d", &ai, &bi);
        swap(&posude[ai-1], &posude[bi-1]);
    }
    
    if (posude[0] == 1){
        printf("1");
    }else if(posude[1] == 1){
        printf("2");
    }else{
        printf("3");
    }
}