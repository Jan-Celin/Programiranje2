#include <stdio.h>
#include <ctype.h>
#include <string.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

int main() {
    char buffer[256];
    int i, n;
    int slova = 0, velika = 0, mala = 0, znamenke = 0, razmaci = 0, ostalo = 0;
    scanf("%d\n", &n);
    while(fgets(buffer, 256, stdin)){
        for(i = 0; i < strlen(buffer); ++i){
            if(isalpha(buffer[i])){
                slova++;
            }
            
            else if(isdigit(buffer[i])){
                znamenke++;
                //printf("%c\n", buffer[i]);
            }
            else if(buffer[i] == ' '){
                razmaci++;
            }
            else if(ispunct(buffer[i])){
              ostalo++;
            }
            if(isupper(buffer[i])){
                velika++;
            }
            if(islower(buffer[i])){
                mala++;
            }
        }
    }
    printf("%d %d %d\n", slova, velika, mala);
    printf("%d %d %d", znamenke, razmaci, ostalo);
    return 0;
}
