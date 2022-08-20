#include <stdio.h>

struct node{
    int angka;
    struct node *next;
    struct node *prev;
}*head, *tail, *baru, *tamp;
 
void tambahDepan(int data){
    baru = (struct node*)malloc(sizeof(struct node));
    baru->angka = data;
    if(head == NULL){
        head=tail=baru;
    }else{
        baru->next = head;
        head->prev = baru;
        head = baru;
    }
    head->prev = NULL;
    tail->next = NULL;
}

void tambahBelakang(int data){
    baru = (struct node*)malloc(sizeof(struct node));
    baru->angka = data;
    if(head == NULL){
        head=tail=baru;
    }else{
        tail->next = baru;
        baru->prev = tail;
        tail = baru;
    }
    head->prev = NULL;
    tail->next = NULL;
}

void hapusBelakang(){
    if(head == NULL){
        printf("Data kosong \n");
    }else if(head->next == NULL){
        free(head);
        head=tail=NULL;
    }else{
        tail = tail->prev;
        free(tail->next);
        tail->next = NULL;
    }
    
}

void tampilD(){
    tamp = head;
    while(tamp!=NULL){
        printf("|%d|->", tamp->angka);
        tamp=tamp->next;
    }printf("NULL\n");
}

void tampilB(){
    tamp = tail;
    while(tamp!=NULL){
        printf("|%d|->", tamp->angka);
        tamp=tamp->prev;
    }printf("NULL\n");
}

void main(){
    int angka;
    printf("Masukan angka : ");
    scanf("%d", &angka);
    if(angka!=-1){
        do{
            if(angka == 0){
                hapusBelakang();
                tampilD();
                tampilB();
            }else if(angka%2 == 0){
                tambahDepan(angka);
                tampilD();
                tampilB();
            }else if(angka%2 == 1){
                tambahBelakang(angka);
                tampilD();
                tampilB();
            }
            printf("Masukan angka : ");
            scanf("%d", &angka);
        }while(angka!=-1);
    }
}

