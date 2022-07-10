#include <stdio.h>
#include <string.h>
#include <ctype.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif


int main() {
  int glazba = 0, video = 0, tekst = 0, ostalo = 0;
  char buffer[256];
  
  FILE *fp;
  fp = fopen("input.dat", "r");

  if (fp == NULL){
    printf("GREŠKA");
    return 0;
  }

  while (fgets(buffer, 256, fp) != NULL){
    

    if (buffer[strlen(buffer) - 1] == '\0' || buffer[strlen(buffer) - 1] == '\n'){
      if (buffer[strlen(buffer) - 5] == '.' && buffer[strlen(buffer) - 4] == 'm' && buffer[strlen(buffer) - 3] == 'p' && buffer[strlen(buffer) - 2] == '3'){
        glazba++;
      }else if (buffer[strlen(buffer) - 5] == '.' && buffer[strlen(buffer) - 4] == 'm' && buffer[strlen(buffer) - 3] == 'p' && buffer[strlen(buffer) - 2] == '4'){
        video++;
      }else if (buffer[strlen(buffer) - 5] == '.' && buffer[strlen(buffer) - 4] == 't' && buffer[strlen(buffer) - 3] == 'x' && buffer[strlen(buffer) - 2] == 't'){
        tekst++;
      }else{
        ostalo++;
      }
    }else{
      //printf("2. %d %c%c%c\n", strlen(buffer), buffer[strlen(buffer)-3], buffer[strlen(buffer)-2], buffer[strlen(buffer)-1]);
      if (buffer[strlen(buffer) - 4] == '.' && buffer[strlen(buffer) - 3] == 'm' && buffer[strlen(buffer) - 2] == 'p' && buffer[strlen(buffer) - 1] == '3'){
        glazba++;
      }else if (buffer[strlen(buffer) - 4] == '.' && buffer[strlen(buffer) - 3] == 'm' && buffer[strlen(buffer) - 2] == 'p' && buffer[strlen(buffer) - 1] == '4'){
        video++;
      }else if (buffer[strlen(buffer) - 4] == '.' && buffer[strlen(buffer) - 3] == 't' && buffer[strlen(buffer) - 2] == 'x' && buffer[strlen(buffer) - 1] == 't'){
        tekst++;
      }else{
        ostalo++;
      }
    }
  } 
  printf("%d\n%d\n%d\n%d", glazba, video, tekst, ostalo);
  return 0;
}