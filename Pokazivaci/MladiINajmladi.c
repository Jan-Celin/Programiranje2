#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(_VA_ARGS_)
#endif

#define MAXA 200

int main() {
  int n, a;
  int br; // broj mladih
  int mn; // godine starosti najmladje osobe
  int *pbr=NULL, *pmn=NULL;
  
  pbr = &br;
  *pbr = 0;
  pmn = &mn;
  *pmn = 200;
  
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
      scanf(" %d", &a);
      if (a >= 10 && a <= 30){
          (*pbr)++;
      }
      if (a < *pmn){
          *pmn = a;
      }
  }
  
  printf("%d\n%d", *pbr, *pmn);
  return 0;
}