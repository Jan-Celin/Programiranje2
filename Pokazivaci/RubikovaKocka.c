#include <stdio.h>
#include <string.h>
#include <ctype.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

const char BOJE[6][20] = {"Bijela", "Crvena", "Narancasta", "Plava", "Zelena", "Zuta"};
void check_colors(char (*kocka)[3][3]){
    int slozena = 1;
    for(int i = 0; i < 6; ++i){
        int tocno = 1;
        for(int j = 0; j < 3; ++j){
            for(int k = 0; k < 3; ++k){
                if (*(*(*(kocka+i)+j)+k) != *(*(*(kocka+i)+1)+1)){
                    tocno = 0;
                }
            }
        }
        if (tocno == 0){
            printf("%s\n", BOJE[i]);
            slozena = 0;
        }
    }
    if (slozena){
        printf("Kocka je slozena");
    }
}

int main() {
    char kocka[6][3][3];

    for(int i = 0; i < 6; ++i){
        for(int j = 0; j < 3; ++j){
            for(int k = 0; k < 3; ++k){
                scanf(" %c", &kocka[i][j][k]);
            }
        }
    }

    check_colors(kocka);
    return 0;
}