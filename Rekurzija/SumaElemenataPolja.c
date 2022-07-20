#include <stdio.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

#define MAX_SIZE 10

int suma_rekurzivno(int array[10], int broj){
    if (broj == MAX_SIZE) return 0;
    return array[broj] + suma_rekurzivno(array, ++broj);
}

int main() {
    int array[MAX_SIZE];
    int i = 0;

    for (i=0; i<MAX_SIZE; i++) {
        scanf("%d", array+i);
    }
    printf("%d", suma_rekurzivno(array, 0));
    return 0;
}