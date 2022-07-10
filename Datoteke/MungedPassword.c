#include <stdio.h>
#include <string.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

typedef struct {
  char from;
  char to;
} substitution;

// Funkcija koja mijenja znakove odgovarajucom zamjenom
void substitute_character(char password[], substitution s) {
  int i;
  for (i = 0; i < strlen(password); ++i){
    if (password[i] == s.from){
      password[i] = s.to;
    }
  }
}

int main() {
  char password[128];
  int n, i;
  substitution s[16];

  scanf("%s", password);

  FILE *fp;
  fp = fopen("input.dat", "r");

  fscanf(fp, "%d", &n);
  for (i = 0; i < n; ++i){
    fscanf(fp, " %c %c", &s[i].from, &s[i].to);
    //printf(fp, "%c %c", s[i].from, s[i].to);
  }

  for (i = 0; i < n; i++) {
    substitute_character(password, s[i]);
  }

  printf("%s", password);

  fclose(fp);

  return 0;
}
