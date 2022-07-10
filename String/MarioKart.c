#include <stdio.h>
#include <ctype.h>
#include <string.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

int main() {
    char buffer[101];
    int vodstvo = 0;
    
    fgets(buffer, 100, stdin);
    for(int i = 0; i < strlen(buffer); ++i){
        if(buffer[i] == 'M'){
            if(vodstvo){
                printf("Mario\n%ld", strlen(buffer)-i-1);
            }else{
                vodstvo = 1;
            }
        }
        else if(buffer[i] == 'P'){
            if(vodstvo){
                printf("Princeza\n%ld", strlen(buffer)-i-1);
            }else{
                vodstvo = 1;
            }
        }
    }
    return 0;
}
