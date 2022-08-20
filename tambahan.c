#include <stdio.h>

void main() {
    int a = 5;
    int *p = &a;
    int *r = p;
    int *x;
    printf("%d \n", *p); // 5 value dari si p
    printf("%x \n", p); // alamat dari si a 
    printf("%d \n", a); // 5 value dari si a
    printf("%x \n", &a); // alamat dari si a

    // printf("%d", *a); // error

    printf("%x \n", &p); // alamat si p? 
    printf("%x \n", &r); // alamat si p? 
    printf("%x \n", x);
}