#include <stdio.h>

void testing(int *p){
    printf("%d ", *p);
    *p++;
}

void main() {
    int a = 2;
    int *p = &a;
    int c = a;

    testing(&c);
    a++;
    printf("%d ", *p);
    testing(&a);
    printf("%d ", c);
}

2 3 3 2
2 2 3 3
2 3 2 3
2 4 4 5
2 3 4 5