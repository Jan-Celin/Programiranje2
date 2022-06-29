#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

typedef struct{
    float re;
    float im;
} complex;

complex add (complex a, complex b){
    complex sol;
    sol.re = a.re + b.re;
    sol.im = a.im + b.im;
    return sol;
}
complex subtract (complex a, complex b){
    complex sol;
    sol.re = a.re - b.re;
    sol.im = a.im - b.im;
    return sol;
}
complex multiply (complex a, complex b){
    complex sol;
    sol.re = a.re * b.re - a.im * b.im;
    sol.im = a.re * b.im + a.im * b.re;
    return sol;
}
complex divide (complex a, complex b){
    complex sol;
    sol.re = (a.re * b.re + a.im * b.im) / (b.re * b.re + b.im * b.im);
    sol.im = (a.im * b.re - a.re * b.im) / (b.re * b.re + b.im * b.im);
    return sol;
}

int main() {
    complex a, b;
    char op;
    
    scanf("%f %f\n%f %f\n%c", &a.re, &a.im, &b.re, &b.im, &op);
    
    switch (op){
        case '+':
            printf("%.2f\t%.2f", add(a, b).re, add(a, b).im);
            break;
        case '-':
            printf("%.2f\t%.2f", subtract(a, b).re, subtract(a, b).im);
            break;
        case '*':
            printf("%.2f\t%.2f", multiply(a, b).re, multiply(a, b).im);
            break;
        case '/':
            printf("%.2f\t%.2f", divide(a, b).re, divide(a, b).im);
            break;
        default:
            printf("Greska!");
            break;
    }
    return 0;
}
