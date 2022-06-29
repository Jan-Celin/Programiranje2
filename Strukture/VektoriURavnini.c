#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

typedef struct{
    float x;
    float y;
    float z;
} vector;

float det(vector i, vector j, vector k){
    return i.x * j.y * k.z + k.x * i.y * j.z + j.x * k.y * i.z - k.x * j.y * i.z - i.x * k.y * j.z - j.x * i.y * k.z;
}

int main() {
    vector i, j, k;
    
    scanf("%f %f %f\n%f %f %f\n%f %f %f", &i.x, &i.y, &i.z, &j.x, &j.y, &j.z, &k.x, &k.y, &k.z);
    
    if (det(i, j, k) == 0){
        printf("DA");
    }
    else{
        printf("NE");
    }
    return 0;
}