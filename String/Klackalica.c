#include <stdio.h>
#include <ctype.h>
#include <string.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

int main() {
    char buffer[101];
    int strana = 0, lijevo = 0, desno = 0;
    
    
    fgets(buffer, 100, stdin);
    for(int i = 0; i < strlen(buffer); ++i){
        if (buffer[i] == 'S'){
            if (strana == 0){
                lijevo++;
            }else{
                desno++;
            }
        }
        else if (buffer[i] == 'B'){
            strana = 1;
        }
    }
    if (lijevo > desno){
        printf("Lijevo");
    }else if (desno > lijevo){
        printf("Desno");
    }else{
        printf("Ravnoteza");
    }
    return 0;
}
