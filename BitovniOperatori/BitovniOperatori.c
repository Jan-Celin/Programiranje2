#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t a, b, rez;
    char c;
    scanf("%c", &c);
    scanf(" %hhi %hhi", &a, &b);
    
    switch (c){
        case '&':
            rez = a & b;
            printf("%d", rez);
            break;
        case '|':
            rez = a | b;
            printf("%d", rez);
            break;
        case '^':
            rez = a ^ b;
            printf("%d", rez);
            break;
        case '<':
            rez = a << b;
            printf("%d", rez);
            break;
        case '>':
            rez = a >> b;
            printf("%d", rez);
            break;
        default:
            printf("Pogrešan unos!");
            break;
    }
    
    return 0;
}