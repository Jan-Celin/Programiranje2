#include <stdio.h>
#include <string.h>

#define SIZE 256

int main () {
    char buffer[SIZE];
    int i, size = 0;

    FILE *fp;
    fp = fopen("input.dat", "r");

    if (fp == NULL) {
        printf("Greška");
        return -1;
    }

    while (fgets(buffer, SIZE, fp) != NULL) {
        for (i = 0; i < sizeof(buffer); ++i){
          switch(buffer[i]){
            case 'a':
              buffer[i] = 'n';
              break;
            case 'b':
              buffer[i] = 'o';
              break;
            case 'c':
              buffer[i] = 'p';
              break;
            case 'd':
              buffer[i] = 'q';
              break;
            case 'e':
              buffer[i] = 'r';
              break;
            case 'f':
              buffer[i] = 's';
              break;
            case 'g':
              buffer[i] = 't';
              break;
            case 'h':
              buffer[i] = 'u';
              break;
            case 'i':
              buffer[i] = 'v';
              break;
            case 'j':
              buffer[i] = 'w';
              break;
            case 'k':
              buffer[i] = 'x';
              break;
            case 'l':
              buffer[i] = 'y';
              break;
            case 'm':
              buffer[i] = 'z';
              break;
            case 'n':
              buffer[i] = 'a';
              break;
            case 'o':
              buffer[i] = 'b';
              break;
            case 'p':
              buffer[i] = 'c';
              break;
            case 'q':
              buffer[i] = 'd';
              break;
            case 'r':
              buffer[i] = 'e';
              break;
            case 's':
              buffer[i] = 'f';
              break;
            case 't':
              buffer[i] = 'g';
              break;
            case 'u':
              buffer[i] = 'h';
              break;
            case 'v':
              buffer[i] = 'i';
              break;
            case 'w':
              buffer[i] = 'j';
              break;
            case 'x':
              buffer[i] = 'k';
              break;
            case 'y':
              buffer[i] = 'l';
              break;
            case 'z':
              buffer[i] = 'm';
              break;
            case 'A':
              buffer[i] = 'N';
              break;
            case 'B':
              buffer[i] = 'O';
              break;
            case 'C':
              buffer[i] = 'P';
              break;
            case 'D':
              buffer[i] = 'Q';
              break;
            case 'E':
              buffer[i] = 'R';
              break;
            case 'F':
              buffer[i] = 'S';
              break;
            case 'G':
              buffer[i] = 'T';
              break;
            case 'H':
              buffer[i] = 'U';
              break;
            case 'I':
              buffer[i] = 'V';
              break;
            case 'J':
              buffer[i] = 'W';
              break;
            case 'K':
              buffer[i] = 'X';
              break;
            case 'L':
              buffer[i] = 'Y';
              break;
            case 'M':
              buffer[i] = 'Z';
              break;
            case 'N':
              buffer[i] = 'A';
              break;
            case 'O':
              buffer[i] = 'B';
              break;
            case 'P':
              buffer[i] = 'C';
              break;
            case 'Q':
              buffer[i] = 'D';
              break;
            case 'R':
              buffer[i] = 'E';
              break;
            case 'S':
              buffer[i] = 'F';
              break;
            case 'T':
              buffer[i] = 'G';
              break;
            case 'U':
              buffer[i] = 'H';
              break;
            case 'V':
              buffer[i] = 'I';
              break;
            case 'W':
              buffer[i] = 'J';
              break;
            case 'X':
              buffer[i] = 'K';
              break;
            case 'Y':
              buffer[i] = 'L';
              break;
            case 'Z':
              buffer[i] = 'M';
              break;
          }
        }
        printf("%s", buffer);
    }


    fclose(fp);

    return 0;
}