#include<stdio.h>
#include<stdlib.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

#define MAX_SIZE 10

int max_rec(int *polje, int N) {
  int max_rest;
  if (N == 0) return 0;
  max_rest = max_rec(polje, --N);
  if (polje[N] > polje[max_rest]){
    return N;
  }else{
    return max_rest;
  }
}

void sort_rec(int *polje, int N) {
  if (N == 1) return;
  int max = max_rec(polje, N);
  int temp = polje[0];
  polje[0] = polje[max];
  polje[max] = temp;

  sort_rec(polje+1, N-1);
}

void print_array(int array[], int size) {
    int i;

    for (i=0; i<size; i++) printf ("%d ",array[i]);
    printf("\n");
}

int main() {
    int array[MAX_SIZE];
    int i = 0;

    for (i=0; i<MAX_SIZE; i++) {
        scanf("%d", array+i);
    }
    printf("%d\n", max_rec(array, MAX_SIZE));
    sort_rec(array, MAX_SIZE);
    print_array(array, MAX_SIZE);
    return 0;
}