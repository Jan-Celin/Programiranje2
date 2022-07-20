#include<stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif


int moguca_kombinacija(int S, int kov[], int N, int M){
  if(S == M) return 1;
  if (S > M) return 0;
  int i;
  for (i = 0; i < N; ++i){
    if (moguca_kombinacija(S+kov[i], kov, N, M)) return 1;
  }
  return 0;
}
int  main(void)
{
  int kov[10000], count = 0, n, m;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; ++i){
    scanf(" %d", &kov[i]);
  }
  for (int i = 0; i <= m; ++i){
    if (moguca_kombinacija(0, kov, n, i)) count++;
  }
  printf("%d", count);
  return 0;
}
