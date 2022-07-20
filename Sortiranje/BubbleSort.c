#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

int load_data(int polje[10000]){
  int a, i = 0;
  do{
    scanf(" %d", &a);
    if(a == 0){
      break;
    }
    polje[i] = a;
    i++;
  }while(polje[i-1] != 0);
  
  return i;
}

void bubble_sort(int polje[10000], int duljina_niza){
  for (int i = 0; i < duljina_niza; i++) {
        for (int j = 1; j < duljina_niza; j++) {
            if (polje[j - 1] < polje[j]) {
                int tmp = polje[j - 1];
                polje[j - 1] = polje[j];
                polje[j] = tmp;
            }
        }
    }
}

int main() {
  int polje[10000], i = 0, duljina_niza;

  duljina_niza = load_data(polje);

  bubble_sort(polje, duljina_niza);

  for(i = 0; i < duljina_niza; ++i){
    printf("%d ", polje[i]);
  }
  return 0;
}