#include <stdio.h>
#include <string.h>
#include <ctype.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

typedef struct {
  char from;
  char to;
} substitution;


void remove_punct(char *broj_zn){
  int i, j = 0;
  for (i = 0; i < strlen(broj_zn); ++i){
    broj_zn[i-j] = tolower(broj_zn[i]);
    if (!isalpha(broj_zn[i])){
      j++;
    }
  }
  broj_zn[i-j] = '\0';
}

int letter_to_number(char *broj_zn){
  int i;
  char brojevi[10][10] = {"nula", "jedan", "dva", "tri", "cetiri", "pet", "sest", "sedam", "osam", "devet"};
  for (i = 0; i < 10; ++i){
    if (!strcmp(brojevi[i], broj_zn)){
      return i;
    }
  }
}

int main() {
  char buffer[256];
  int broj;


  FILE *fp;
  fp = fopen("input.dat", "r");

  while (fscanf(fp, "%[^-]-", buffer) > 0){
    //printf("%s", buffer);
    remove_punct(buffer);
    broj = letter_to_number(buffer);
    printf("%d", broj);
  }

  fclose(fp);

  return 0;
}
