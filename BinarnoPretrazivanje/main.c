#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

int main() {

  int n, m, q, i, j;
  char smjer;
  int d;
  int polje[10001][10001];

  scanf("%d %d %d", &n, &m, &q); 
  printf("%d %d %d", n, m, q);
  for (i = 0; i < n; ++i) {
    for (j = 0; j < m; ++j) {
      polje[i][j] = 0;
    }
  }

  for (i = 0; i < n; ++i) {
    for (j = 0; j < m; ++j) {
      printf("%d ", polje[i][j]);
    }
    printf("\n");
  }

  /*int i = 0;
  int j = 0;

  for (int k = 0; k < q; ++k)
  {
    scanf("%c %d ", &smjer, &d);
    for (int l = 0; l < d; ++l)
    {
      switch(smjer){
        case '<':
          j--;
          *(*(a + i) + j) += 1;
          break;
        case '>':
          j++;
          *(*(a + i) + j) += 1;
          break;
        case '^':
          i--;
          *(*(a + i) + j) += 1;
          break;
        case 'v':
          i++;
          *(*(a + i) + j) += 1;
          break;
      }
    }
  }

  for (int p = 0; p < n; ++p)
  {
    for (int r = 0; r < m; ++r)
    {
      printf("%d ", *(*(a + p) + r));
    }
  }*/

  return 0;
}