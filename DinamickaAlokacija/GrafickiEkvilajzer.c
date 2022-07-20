#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif


// širina stupca
#define WIDTH 3
// jedinična visina stupca
#define HEIGHT 2
// razmak između stupaca
#define GAP 2

char **nacrtaj(int *p, int n, int h) {
  // alocirati memoriju za 2d polje koje treba vratiti

    char **matrica = NULL;
    matrica = malloc((h*HEIGHT) * sizeof(char *));
    for (int i = 0; i < h*2; ++i)
    {
        matrica[i] = malloc((n*WIDTH + (n-1) * GAP) * sizeof(char));
        memset(matrica[i], '.', (n*WIDTH + (n-1) * GAP));
    }

  // ucrtati ekvilajzer u polje
    for(int i  = 0; i < n; ++i){
        int vp = p[i];

        int index_poc_retka = (h * HEIGHT) - vp * HEIGHT;
        int index_poc_stupca = i * (WIDTH + HEIGHT);

        for (int j = index_poc_retka; j < h * HEIGHT; ++j){
            for (int k = index_poc_stupca; k < index_poc_stupca + WIDTH; ++k){
                matrica[j][k] = '#';
            }
        }
    }
    return matrica;

}

void ispisi(char **ans, int n, int h) {
  for (int i = 0; i < h*HEIGHT; ++i) {
    for (int j = 0; j < n*(WIDTH+GAP)-GAP; ++j) {
      printf("%c", ans[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int n, *p, h = 0;
  scanf("%d", &n);
  p = malloc(n*sizeof(int));
  for (int i = 0; i < n; ++i) {
    scanf("%d", p+i);
    h = p[i]>h ? p[i] : h;
  }

  char **ans = nacrtaj(p, n, h);
  ispisi(ans, n, h);
  // osloboditi cjelokupnu alociranu memoriju

  for (int i = 0; i < h*HEIGHT; ++i){
      free(ans[i]);
  }
  free(ans);

  free(p);
  return 0;
}
