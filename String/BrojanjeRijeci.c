#include <stdio.h>
#include <ctype.h>
#include <string.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

int main() {
    char buffer[256];
    int i, br_rijeci = 0, prvo_slovo = 1;
    fgets(buffer, 256, stdin);
    
    for(i = 0; i < strlen(buffer); ++i){
        if(prvo_slovo){
            prvo_slovo = 0;
            buffer[i] = toupper(buffer[i]);
        }else{
            if(isspace(buffer[i])){
                br_rijeci++;
                prvo_slovo = 1;
            }
            buffer[i] = tolower(buffer[i]);
        }
    }
    printf("%d\n%s", br_rijeci, buffer);
    return 0;
}
