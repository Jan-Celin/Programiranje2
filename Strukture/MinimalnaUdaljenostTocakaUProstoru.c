#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

typedef struct {
  float x;
  float y;
  float z;
} point;

// Napisati funkciju za ucitavanje tocaka
void load_points(int n, point points[128]) {
  int i;
  for (i = 0; i < n; ++i){
    scanf(" %f %f %f", &points[i].x, &points[i].y, &points[i].z);
  }
}

float distance(point p1, point p2) {
  return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) + pow(p1.z - p2.z, 2));
}

float get_minimal_distance(point points[], int n) {
  int i, j;
  float min = 1000000, dalj;

  for (i = 0; i < n; ++i){
    for (j = 0; j < n; ++j){
      dalj = sqrt(pow(points[i].x - points[j].x, 2) + pow(points[i].y - points[j].y, 2) +pow(points[i].z - points[j].z, 2));
        if (dalj < min && dalj != 0){
          min = dalj;
        }
    }
  }
    
  return min;
}

int main() {
  int n;
  point p[128];

  scanf("%d", &n);

  load_points(n, p);

  printf("%.2f", get_minimal_distance(p, n));

  return 0;
}
