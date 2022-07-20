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
    //printf("%d ", i);
  }while(polje[i-1] != 0);
  
  return i;
}

void selection_sort(int polje[10000], int duljina_niza){
  for (int i = 0; i < duljina_niza - 1; i++) {
        int min = i;
        for (int j = i + 1; j < duljina_niza; j++) {
            if (polje[min] > polje[j]) {
                min = j;
            }
        }

        int tmp = polje[min];
        polje[min] = polje[i];
        polje[i] = tmp;
    }
}

int main() {
  int polje[10000], a, i = 0, duljina_niza;

  duljina_niza = load_data(polje);
  //printf("%d", duljina_niza);
  selection_sort(polje, duljina_niza);

  for(i = 0; i < duljina_niza; ++i){
    printf("%d ", polje[i]);
  }
  return 0;
}