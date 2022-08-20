#include <stdio.h>

void testing(int *a){

}

void main(){
    int a = 4;
    int *p = &a;
    int c = p;

    a--;
    printf("%d", ++*p);

}