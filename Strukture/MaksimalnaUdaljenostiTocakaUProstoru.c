#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

typedef struct{
    float x;
    float y;
    float z;
} point;



int main() {
    int n, i, j;
    float max = 0, dalj;
    point points[10];
    
    scanf("%d", &n);
    
    for (i = 0; i < n; ++i){
        scanf(" %f %f %f", &points[i].x, &points[i].y, &points[i].z);
    }
    
    for (i = 0; i < n; ++i){
        for (j = 0; j < n; ++j){
            dalj = sqrt(pow(points[i].x - points[j].x, 2) + pow(points[i].y - points[j].y, 2) +pow(points[i].z - points[j].z, 2));
            if (dalj > max){
                max = dalj;
            }
        }
    }
    printf("%.2f", max);
    
    
    return 0;
}