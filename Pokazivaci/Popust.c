#include <stdio.h>
#include <string.h>
#include <ctype.h>


#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

int *naj(int *a, int *b, int *c){
    if (*a > *b && *a > *c){
        return a;
    }else if (*b > *a && *b > *c){
        return b;
    }else{
        return c;
    }
}

int main() {
    int a, b, c, najveci;
    int *pa, *pb, *pc;
    
    scanf("%d %d %d", &a, &b, &c);
    pa = &a;
    pb = &b;
    pc = &c;
    
    najveci = *(naj(pa, pb, pc));
    printf("%d\n", najveci);
    printf("%d", a + b + c - najveci);
    return 0;
}