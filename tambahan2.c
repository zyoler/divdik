#include <stdio.h>

void tambahByIndex(int a, int index){
    if(head == NULL){

    }else if(index == 0){

    }else if(head->next == NULL){

    }else{
        tam = head;
        for(int a = 2; a < index; a++){
            tam=tam->next;
            if(tam->next == NULL){
                printf("Index melebihi\n");
                break;
            }
        }
        if(tam->next != NULL){
            baru->next = tam->next;
            tam-next = baru;
        }
    }
}

void tambahByValue(int a, int value){
    if(head == NULL){
        printf("Data kosong");
    }else if(value == head->angka){
        baru->next = head;
        head = baru;
    }else if(head->next == NULL){
        printf("Value tidak ada\n");
    }else{
        tam = head;
        while(tam->angka != value){
            tam=tam->next;
            if(tam->next == NULL){
                printf("Value tidak ada\n");
                break;
            }
        }
        if(tam->next != NULL){
            baru->next = tam->next;
            tam-next = baru;
        }
    }
}

void tambahTengah(int a){
    if(head == NULL){
        printf("Data kosong\n");
    }else if(head->next == NULL){
        printf("Data cuman 1\n");
    }else{
        int i = 0;
        tamp = head;
        while(tamp != NULL){
            i++;
            tamp=tamp->next;
        }
        // i = 5

        if(i%2 == 1)
            i++;

        tamp = head;
        for(int a = 1; a < i/2; a++){
            tam = tam->next;
        }
        baru->next = tam->next;
        tam->next = baru;
    }
}

void tampil(){
    tamp = head;
    while(...){
        printf("|%d|", tamp->angka);
        tamp=tamp->next;
    }
    printf("NULL\n");
}

bantu!=NULL
bantu->next!=NULL
tamp==NULL
tamp->next!=NULL
tamp!=NULL


void main(){

}