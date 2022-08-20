#include <iostream>
using namespace std;
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
	int angka;
   node *next;
}*tam,*head,*baru,*tamp;

int pilih;

void ngulang(){
	cout << "===========================" << endl;
   cout << "======  LINGKED      ======" << endl;
   cout << "======        LIST   ======" << endl;
   cout << "======<<__________>> ======" << endl;
	cout << "===========================" << endl;
	cout << "=     1. TAMBAH DATA      =" << endl;
   cout << "=     2. HAPUS  DATA      =" << endl;
   cout << "=     3. UPDATE DATA      =" << endl;
   cout << "=     4. CEK    DATA      =" << endl;
   cout << "=     5. KELUAR           =" << endl;
   cout << "=                         =" << endl;
   cout << "      PILIH : ";				  cin >> pilih;
   cout << "===========================" << endl << endl;
   if(pilih==1)
   	tambah();
   else if(pilih==2)
   	hapus();
   else if(pilih==3)
   	update();
   else if(pilih==4)
   	cek();
   else if(pilih==5)
		; //nothing hehe
   else
   	ngulang;
}

void tambah(){
	cout << "=============================" << endl;
	cout << "= 1. TAMBAH DEPAN           =" << endl;
   cout << "= 2. TAMBAH BELAKANG        =" << endl;
   cout << "= 3. TAMBAH TENGAH BY INDEX =" << endl;
   cout << "= 4. TAMBAH TENGAH BY VALUE =" << endl;
   cout << "= 5. TAMBAH TENGAH BANGET   =" << endl;
   cout << "= 6. KEMBALI                =" << endl;
   cout << "=                           =" << endl;
   cout << "      PILIH : ";				  cin >> pilih;
   cout << "===========================" << endl << endl;
   if(pilih==1)
   	tambahDepan();
   else if(pilih==2)
   	tambahBelakang();
   else if(pilih==3)
   	tambahByIndex();
   else if(pilih==4)
   	tambahByValue();
   else if(pilih==5)
   	tambahTengah();
   else if(pilih==6)
   	ngulang();
   else
   	tambah();
}

void hapus(){
	cout << "=============================" << endl;
	cout << "= 1. HAPUS DEPAN            =" << endl;
   cout << "= 2. HAPUS BELAKANG         =" << endl;
   cout << "= 3. HAPUS TENGAH BY INDEX  =" << endl;
   cout << "= 4. HAPUS TENGAH BY VALUE  =" << endl;
   cout << "= 5. HAPUS TENGAH BANGET    =" << endl;
   cout << "= 6. KEMBALI                =" << endl;
   cout << "=                           =" << endl;
   cout << "      PILIH : ";				  cin >> pilih;
   cout << "===========================" << endl << endl;
   if(pilih==1)
   	;
   else if(pilih==2)
   	;
   else if(pilih==3)
   	;
   else if(pilih==4)
   	;
   else if(pilih==5)
   	;
   else if(pilih==6)
   	ngulang();
   else
   	hapus();
}

void update(){
	cout << "=============================" << endl;
	cout << "= 1. UPDATE BY INDEX        =" << endl;
   cout << "= 2. UPDATE BY VALUE        =" << endl;
   cout << "= 3. KEMBALI                =" << endl;
   cout << "=                           =" << endl;
   cout << "      PILIH : ";				  cin >> pilih;
   cout << "===========================" << endl << endl;
   if(pilih==1)
   	;
   else if(pilih==2)
   	;
   else if(pilih==3)
   	ngulang();
   else
   	update();
}

void cek(){
	cout << "=============================" << endl;
	cout << "= 1. CEK NILAI              =" << endl;
   cout << "= 2. ANGKA TERBESAR         =" << endl;
   cout << "= 3. ANGKA TERKECIL         =" << endl;
   cout << "= 4. RATA-RATA              =" << endl;
   cout << "= 5. JUMLAH                 =" << endl;
   cout << "= 6. CEK DATA LINGKED LIST  =" << endl;
   cout << "= 7. KEMBALI                =" << endl;
   cout << "=                           =" << endl;
   cout << "      PILIH : ";				  cin >> pilih;
   cout << "===========================" << endl << endl;
   if(pilih==1)
   	;
   else if(pilih==2)
   	;
   else if(pilih==3)
   	;
   else if(pilih==4)
   	;
   else if(pilih==5)
   	;
   else if(pilih==6)
   	;
	else if(pilih==7)
   	ngulang();
   else
   	cek();
}





void tampil(){
	cout << "===============================" << endl;
   tam=head;
   while(tam!=NULL){
      cout << "|" << tam->angka << "|->";
      tam=tam->next;
   }
   	cout << "NULL" << endl;
   cout << "===============================" << endl << endl;
}



void testing(int a){
	baru=(node*)malloc(sizeof(node));
   baru->angka=a;
   baru->next=head;
   head=baru;
   tampil();
}

void tambahDepan(int a){
	baru=(node*)malloc(sizeof(node));
   	baru->angka=a;
   	baru->next=head;
   	head=baru;
}

void tambahBelakang(int a){
	baru=(node*)malloc(sizeof(node));
   baru->angka=a;
   if(head==NULL){
   		baru->next=head;
      	head=baru;
   }else{
   		tam=head;
      while(tam->next!=NULL){
      	tam=tam->next;
      }tam->next=baru;
      baru->next=NULL;
   }
}

void tambahByIndex(int a,int index){
	baru=(node*)malloc(sizeof(node));
   	baru->angka=a;
	if(head==NULL){
   		printf("Data kosong\n");
	}else if(index==0){
   		baru->next=head;
    	head=baru;
 	}else if(head->next==NULL || index<0){
		printf("Tidak ada");
	}else{
   	tam=head;
		for(int a=1;a<index;a++){
      		tam=tam->next;
         	if(tam->next==NULL){
         		printf("Index melebihi");
            	tam=tam->next;
            	break;
         }
      	}if(tam!=NULL){
      		baru->next=tam->next;
        	tam->next=baru;
      }
   }
}

void tambahByValue(int a,int value){
	baru=(node*)malloc(sizeof(node));
	baru->angka=a;
   	if(head==NULL){
		printf("Data kosong\n");
	}else if(value==head->angka){
   		baru->next=head;
    	head=baru;
   	}else if(head->next==NULL){
		printf("Value error\n");
   	}else{
   		tam=head;
     	while(value!=tam->next->angka){
      		tam=tam->next;
	        if(tam->next==NULL){
	         	tam=tam->next;
	            printf("Value error\n");
	            break;
	        }
      	}if(tam!=NULL){
    		baru->next=tam->next;
        	tam->next=baru;
      	} 
   }
}

void tambahTengah(int a){
	baru=(node*)malloc(sizeof(node));
   baru->angka=a;
   	if(head==NULL){
   		printf("Data kosong\n");
   	}else if(head->next==NULL){
   		printf("Tidak bisa tambah tengah\n");
   	}else{
	   	int x=0;
	    tam=head;
	    while(tam!=NULL){
	    	x++;
	        tam=tam->next;
	    }tam=head;
	    if(x%2==1)
	      	x++;
	    for(int a=1;a<x/2;a++){
	      	tam=tam->next;
	    }
		baru->next=tam->next;
	    tam->next=baru;
	}
}

void hapusDepan(){
	if(head==NULL){
   	printf("Data kosong\n");
   }else{
   	tam=head;
      head=head->next;
      delete tam;
   }
}

void hapusBelakang(){
	if(head==NULL){
   	printf("Data kosong\n");
   }else if(head->next==NULL){
   	delete head;
      head=NULL;
   }else{
   	tam=head;
   	while(tam->next->next!=NULL){
      	tam=tam->next;
      }delete tam->next;
      tam->next=NULL;
   }
}

void hapusByIndex(int index){
	if(head==NULL){
   	printf("Data kosong\n");
   }else if(index == 0){
   		tam=head;
      	head=head->next;
      	delete tam;
   }else if(head->next==NULL){
   		printf("Index error\n");
   }else{
   	tam=head;
      for(int a=1;a<index;a++){
      	tam=tam->next;
         
		 if(tam->next==NULL){
         	prin tf("Index error\n");
            tam=tam->next;
            break;
         }
         
      }if(tam!=NULL){
      		tamp=tam->next;
         	tam->next=tam->next->next;
         	delete tamp;
      }
   }
}

void hapusByValue(int value){
	if(head==NULL){
   	printf("Data kosong\n");
   }else if(value == head->angka){
   	tam=head;
      head=head->next;
      delete tam;
   }else if(head->next==NULL){
   	printf("Index error\n");
   }else{
   	tam=head;
      while(value!=tam->next->angka){
      	tam=tam->next;
         if(tam->next==NULL){
         	printf("Index error\n");
            tam=tam->next;
            break;
         }
      }if(tam!=NULL){
      	tamp=tam->next;
         tam->next=tam->next->next;
         delete tamp;
      }
   }
}

void hapusTengah(){
	if(head==NULL){
   	printf("Data kosong\n");
   }else if(head->next==NULL || head->next->next==NULL){
   	printf("Tidak bisa hapus tengah\n");
   }else{
      int x=0;
   	tam=head;
      while(tam!=NULL){
      	x++;
         tam=tam->next;
      }tam=head;
      if(x%2==0)
      	x--;
      for(int a=1;a<x/2;a++){
      	tam=tam->next;
      }tamp=tam->next;
      tam->next=tam->next->next;
      delete tamp;
   }
}

void updateByIndex(int a,int index){
	baru=(node*)malloc(sizeof(node));
   baru->angka=a;
   if(head==NULL){
   	printf("Data kosong\n");
   }else if(index==0){
      baru->next=head->next;
      delete head;
      head=baru;
   }else if(head->next==NULL){
   	printf("Index error\n");
   }else{
   	tam=head;
      for(int a=1;a<index;a++){
      	tam=tam->next;
         if(tam->next==NULL){
         	tam=tam->next;
            printf("Index melebihi\n");
            break;
         }
      }if(tam!=NULL){
      	baru->next=tam->next->next;
         delete tam->next;
         tam->next=baru;
      }
   }
}

void updateByValue(int a,int value){
	baru=(node*)malloc(sizeof(node));
   baru->angka=a;
   if(head==NULL){
   	printf("Data kosong\n");
   }else if(value == head->angka){
   	baru->next=head->next;
      delete head;
      head=baru;
   }else if(head->next==NULL){
   	printf("Value error\n");
   }else{
   	tam=head;
      while(value!=tam->next->angka){
      	tam=tam->next;
         if(tam->next==NULL){
         	tam=tam->next;
            printf("Index error\n");
            break;
         }
      }if(tam!=NULL){
      	baru->next=tam->next->next;
         delete tam->next;
         tam->next=baru;
      }
   }
}

void tampil(){
	tam=head;
   while(tam!=NULL){
   	printf("|%d|->",tam->angka);
      tam=tam->next;
   }printf("NULL\n");
}

main(){
	for(int a=1;a<=5;a++){
   	tambahBelakang(a);
   }
	tampil();

   for(int a=0;a<8;a++){
		updateByValue(a+5,a);
		tampil();
   }


   getch();
}



