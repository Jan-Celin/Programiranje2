#include <stdio.h>
#include <string.h>
#include <ctype.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

// Napisati funkciju koja cisti string od nepotrebnih znakova
void clean_string(char *broj_zn) {
  int i, j = 0;
  for (i = 0; i < strlen(broj_zn); ++i){
    broj_zn[i-j] = tolower(broj_zn[i]);
    if (!isalpha(broj_zn[i])){
      j++;
    }
  }
  broj_zn[i-j] = '\0';
}

char get_operator(char o[]) {
  if (!strcmp("plus", o)) {
    return '+';
  }

  if (!strcmp("minus", o)) {
    return '-';
  }

  if (!strcmp("puta", o)) {
    return '*';
  }

  if (!strcmp("podijeljeno", o)) {
    return '/';
  }

  if (!strcmp("modulo", o)) {
    return '%';
  }
  //printf("%s", o);
  return -1;
}

int get_operand(char n[]) {
  char numbers[10][16] = {"nula", "jedan", "dva", "tri", "cetiri", "pet", "sest", "sedam", "osam", "devet"};

  for (int i = 0; i < 10; i++) {
    if (!strcmp(numbers[i], n)) {
      return i;
    }
  }
  //printf("1");
  return -1;
}

int calculate_operation(char a[], char b[], char o[]) {
  char x = get_operator(o);
  switch(x) {
    case '+':
      return get_operand(a) + get_operand(b);
    case '-':
      return get_operand(a) - get_operand(b);
    case '*':
      return get_operand(a) * get_operand(b);
    case '/':
      return get_operand(a) / get_operand(b);
    case '%':
      return get_operand(a) % get_operand(b);
  }
  //printf("%c", x);
  return -1;
}

int main() {
  int n, rez, i;
  char br1[64], br2[64], op[64];

  scanf("%d", &n);

  FILE *fp;
  fp = fopen("input.dat", "r");

  for (i = 0; i < n; ++i){
    fscanf(fp, " %s %s %s", br1, op, br2);
    clean_string(br1);
    clean_string(br2);
    clean_string(op);
    //printf("%s %s\n", br1, br2);
    rez = calculate_operation(br1, br2, op);
    printf("%d ", rez);
    
  }

  fclose(fp);

  return 0;
}
