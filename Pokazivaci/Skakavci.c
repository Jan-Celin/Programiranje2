#include <stdio.h>
#include <ctype.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

int *idx(int x, int n, int *niz) {
    for(int i = 0; i < n; ++i){
        if(*(niz+i) == x){
            return niz+i;
        }
    }
}

void move(int *start, int len) {
    int temp = *start;
    for(int i = 0; i < len; ++i){
        *(start - i) = *(start - i - 1);
    }
    *(start-len) = temp;
}

int main() {
    int n, k, x, b;
    int skakavci[100];
    int *tren;

    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; ++i){
        skakavci[i] = i+1;
    }

    for(int i = 0; i < k; ++i){
        scanf(" %d %d", &x, &b);
        tren = idx(x, n, skakavci);

        move(tren, b);
    }

    for(int i = 0; i < n; ++i){
        printf("%d ", skakavci[i]);
    }

    return 0;
}
