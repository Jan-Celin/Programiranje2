#include <stdio.h>
#include <ctype.h>
#include <string.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

int main() {
    char buffer[256];
    int i, j = 0, palindrom = 1;
    
    fgets(buffer, 255, stdin);
    
    for(i = 0; i < strlen(buffer); ++i){
        if(isupper(buffer[i])){
            buffer[i] = tolower(buffer[i]);
        }
        if(isspace(buffer[i]) || ispunct(buffer[i])){
            ++j;
        }else{
            buffer[i-j] = buffer[i];
        }
    }
    buffer[i-j] = '\0';
    
    //printf("%s", buffer);
    
    for(i = 0; i < strlen(buffer); ++i){
        if(buffer[i] != buffer[strlen(buffer)-i-1]){
            palindrom = 0;
        }
    }
    if(palindrom){
        printf("DA");
    }else{
        printf("NE");
    }
    return 0;
}
