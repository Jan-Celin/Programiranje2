#include <stdio.h>
#include <string.h>

#define SIZE 256

int main () {
    char f[3], rf[3] = "P2";
    int vrij, dubine[256], h, w, d;
    long i;
    
    
    
    FILE *fp;
    fp = fopen("input.dat", "r");

    if (fp == NULL) {
        printf("Greška");
        return -1;
    }
    
    fscanf(fp, "%s", &f);
    if (strcmp(f, rf)){
      printf("NE");
      return 0;
    }

    fscanf(fp, " %d %d\n%d", &h, &w, &d);
    
    for (i = 0; i <= d; ++i){
      dubine[i] = 0;
    }
    
    for (i = 0; i < h * w; ++i){
      fscanf(fp, " %d", &vrij);
      dubine[vrij]++;
    }
    
    for(i = 0; i <= d; ++i){
      printf("%d ", dubine[i]);
    }
    fclose(fp);

    return 0;
}