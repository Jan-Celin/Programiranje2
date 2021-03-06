#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

typedef struct {
  int x;
  int y;
  int z;
} point;

typedef struct {
  float A;
  float B;
  float C;
  float D;
} plane;

// Napisati funkciju za ucitavanje tocaka
void load_points(int n, point points[128]) {
  int i;
  for (i = 0; i < n; ++i){
    scanf(" %d %d %d", &points[i].x, &points[i].y, &points[i].z);
  }
}

plane calculate_coefficients(point p1, point p2, point p3) {
  plane pl;

  pl.A = ((p2.y - p1.y) * (p3.z - p1.z)) - ((p3.y - p1.y) * (p2.z - p1.z));
  pl.B = ((p2.z - p1.z) * (p3.x - p1.x)) - ((p3.z - p1.z) * (p2.x - p1.x));
  pl.C = ((p2.x - p1.x) * (p3.y - p1.y)) - ((p3.x - p1.x) * (p2.y - p1.y));
  pl.D = -1 * ((pl.A * p1.x) + (pl.B * p1.y) + (pl.C * p1.z));

  return pl;
}

int check_coplanarity(point p[], int n) {
  plane pl;
  int i, istina = 1;

  pl = calculate_coefficients(p[0], p[1], p[2]);

  for (i = 3; i < n; ++i){
      if (pl.A * p[i].x + pl.B * p[i].y + pl.C * p[i].z + pl.D != 0){
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

  if (check_coplanarity(p, n)) {
    printf("DA");
  } else {
    printf("NE");
  }

  return 0;
}
