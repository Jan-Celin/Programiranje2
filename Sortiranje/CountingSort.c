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

void counting_sort(int in[10000], int out[10000], int duljina_niza){
    for(int i = 0; i < duljina_niza; i++) {
      out[in[i]]++;
    }

    int max = in[0];
    for (int i = 1; i < duljina_niza; i++) {
      if (in[i] > max) max = in[i];
    }

    for (int i = 0; i < max+1; i++) {
        for (int j = 0; j < out[i]; j++) {
            printf("%d ", i);
        }
    }
}

int main() {
  int polje[10000], out_polje[10000], a, i = 0, duljina_niza;

  scanf("%d", &duljina_niza);

  load_data(polje, duljina_niza);
  counting_sort(polje, out_polje, duljina_niza);

  
  return 0;
}