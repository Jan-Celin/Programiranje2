#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

typedef struct{
    float re;
    float im;
} complex;

void calc(complex a, complex b, complex *zb, complex *od, complex *mn, complex *di){
    (*zb).re = a.re + b.re;
    (*zb).im = a.im + b.im;

    (*od).re = a.re - b.re;
    (*od).im = a.im - b.im;

    (*mn).re = a.re * b.re - a.im * b.im;
    (*mn).im = a.re * b.im + a.im * b.re;

    (*di).re = (a.re * b.re + a.im * b.im) / (b.re * b.re + b.im * b.im);
    (*di).im = (a.im * b.re - a.re * b.im) / (b.re * b.re + b.im * b.im);
}
int main() {
    complex a, b, zb, od, mn, di;
    
    scanf("%f %f\n%f %f", &a.re, &a.im, &b.re, &b.im);
    
    calc(a, b, &zb, &od, &mn, &di);
    
    printf("%.2f\t%.2f\n%.2f\t%.2f\n%.2f\t%.2f\n%.2f\t%.2f", zb.re, zb.im, od.re, od.im, mn.re, mn.im, di.re, di.im);
    return 0;
}