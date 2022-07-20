#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

int fib(int n){
    if (n == 0){
        return 0;
    }else if (n == 1){
        return 1;
    }
    return (fib(n-1) + fib(n-2));
}


int main(){
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("%d ", fib(i));    
    }
    return 0;
}