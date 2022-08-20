#include <stdio.h>

struct mahasiswa{
    char* nama;
    char* nim;
    struct nilai{
        char* nama_matkul;
        int nilai;
    }matkul[10];
}integer[42];


// struct node{
//     int angka;
//     char pilih;
// };

// void main() {
//     // // Cara 1
//     // baru = (struct node*)malloc(sizeof(struct node));

//     // // Cara 2
//     // baru = malloc(sizeof(struct node));
    
//     // // Cara 3
//     // baru = malloc(0);

//     // baru->angka = 5;
//     // printf("%d", baru->angka);

//     int byte = sizeof(struct node);
//     printf("%d", byte);
// }


