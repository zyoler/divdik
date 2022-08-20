#include <stdio.h>

struct negara{
    int urutan;
    char nama[50];
    char* kepala_negara;
}negara[20];

void main(){

    negara[10].urutan = 11;
    negara[10].nama = "Indonesia";
    negara[10].kepala_negara = "Joko Widodo";

    negara.urutan[11] = 11;
    negara.nama[11] = "Palestina";
    negara.kepala_negara[11] = "Mahmoud Abbas";

    negara[11].urutan = 11;
    negara[11].nama = "Ukraina";
    negara[11].kepala_negara = "Volodymyr Zelensky";

    negara[10].urutan = 11;
    strcpy(negara[10].nama, "Rusia Uraa");
    negara[10].kepala_negara = "Vladimir Putin";

    negara[11].urutan = 11;
    strcpy(negara[11].nama, "Arab Saudi");
    negara[11].kepala_negara = "Salman bin Abdulaziz Al Saud";


}
Bagaimana seorang kepala negara jika ingin memasukan data yang berada pada urutan ke 11?
