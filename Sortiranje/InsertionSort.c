#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

void load_data(int polje[10000], int duljina_niza){
  int a, i = 0;
  for(i = 0; i < duljina_niza; ++i){
    scanf(" %d", &polje[i]);
  }
  
}

void insertion_sort(int polje[10000], int duljina_niza){
  for (int i = 1; i < duljina_niza; i++) {
        int element = polje[i];
        int j = i;

        while (j > 0 && polje[j - 1] > element) {
            polje[j] = polje[j - 1];
            j--;
        }

        polje[j] = element;
    }
}

int main() {
  int polje[10000], a, i = 0, duljina_niza;

  scanf("%d", &duljina_niza);

  load_data(polje, duljina_niza);
  insertion_sort(polje, duljina_niza);

  for(i = 0; i < duljina_niza; ++i){
    printf("%d ", polje[i]);
  }
  return 0;
}