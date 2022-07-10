#include <stdio.h>
#include <string.h>
#include <ctype.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

// Napisati funkciju koja provjerava ako postoje duplikati
// Vraca 1 ako postoje i 0 ako ne postoje
int check_duplicates(char pass[][32], int n) {
  int duplikati = 0;
  int i, j, k;
  
  for(i = 0; i < n; ++i){
    for(j = i+1; j < n; ++j){
      int duplikat = 1;
      if(strlen(pass[i]) != strlen(pass[j])){
          duplikat = 0;
          continue;
        }
      for(k = 0; k < strlen(pass[i]); ++k){
        if(pass[i][k] != pass[j][k]){
          duplikat = 0;
          break;
        }
      }
    if (duplikat == 1){
      duplikati = 1;
      //printf("%s %s", pass[i], pass[j]);
      return 1;
    }
    }
    if(duplikati){
        return 1;
    }
  }

  return 0;
}

// Napisati funkciju koja provjerava ispravnost sifre
// Vraca 1 ako je sifra ispravna i 0 ako nije
int check_password(char password[]) {
    int i, malo = 0, veliko = 0, broj = 0, punkt = 0;
    if(strlen(password) < 8){
        return 0;
    }
    for(i = 0; i < strlen(password); ++i){
        if(islower(password[i])){
            malo = 1;
        }
        if(isupper(password[i])){
            veliko = 1;
        }
        if(isdigit(password[i])){
            broj = 1;
        }
        if(ispunct(password[i])){
            punkt = 1;
        }
    }
    if(malo*veliko*broj*punkt){
        return 1;
    }
  return 0;
}

int main() {
  int n;
  char passwords[128][32];

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%s", passwords[i]);
  }

  if (check_duplicates(passwords, n)) {
    printf("DUPLIKATI");
  } else {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      cnt += check_password(passwords[i]);
    }
    printf("%d", cnt);
  }

  return 0;
}