#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

typedef struct {
  int x;
  int y;
} point;

typedef struct {
  float k;
  float l;
} line;

// Napisati funkciju za ucitavanje tocaka
void load_points(int n, point points[128]) {
  int i;
  for (i = 0; i < n; ++i){
    scanf(" %d %d", &points[i].x, &points[i].y);
  }
}

line calculate_coefficients(point p1, point p2) {
  line l;

  l.k = (float) (p2.y - p1. y) / (p2.x - p1.x);
  l.l = p1.y - l.k * p1.x;

  return l;
}

int check_collinearity(point p[], int n) {
  line l;
  int i, istina = 1;

  l = calculate_coefficients(p[0], p[1]);

  for (i = 2; i < n; ++i){
      if (p[i].y - l.k * p[i].x - l.l != 0){
          istina = 0;
      }
  }
  if (istina == 1){
      return 1;
  }
  return 0;
}

int main() {
  int n;
  point p[128];

  scanf("%d", &n);

  load_points(n, p);

  if (check_collinearity(p, n)) {
    printf("DA");
  } else {
    printf("NE");
  }

  return 0;
}
