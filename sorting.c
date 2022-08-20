#include <stdio.h>

// 9 11 1 7 13 4 8 10 2 5

int data[10] = {5,2,8,1,3,6,9,4,10,7};

void bubblesort(){
    int tamp;
    for(int a = 0; a < 9; a++){
        for(int b = 0; b < 9-a; b++){
            if(data[b] < data[b+1]){
                tamp = data[b];
                data[b] = data[b+1];
                data[b+1] = tamp;
            }
            tampil();
        }
    }
}

void selectionsort(){
    int index, tamp;;
    for(int a = 0; a < 10; a++){
        index = a;
        for(int b = a; b < 10; b++){
            if(data[index] > data[b]){
                index = b;
            }
        }
        tamp = data[index];
        data[index] = data[a];
        data[a] = tamp;
    }
}

void insertionsort(){
    int tamp, b;
    for(int a = 1; a < 5; a++){
        tamp = data[a];
        b = a-1;

        while(b>=0 && data[b] > tamp){
            data[b+1] = data[b];
            b--;
        }
        data[b+1] = tamp;
    }
}

void tampil(){
    for(int a = 0;  a < 10; a++){
        printf("%d ",data[a]);
    }printf("\n");
}

void main() {
    // tampil();
    // bubblesort();
    // selectionsort();
    // insertionsort();

    int n = sizeof(data)/sizeof(int);
    int n = 4 * 8 / 4;

    printf("%d", n);

    // tampil();
}




