/*
#Nama Program : cekbilsembr
#Deskripsi    : cek dan menampilkan apakah i adalah bilangan integer sembaran atau bukan
#Nama Pembuat : Johanes D.K
#NIM : 24060122140155
#Tanggal : 06 Maret 2023
*/

#include <stdio.h>

int main(void){
    //kamus lokal
    /*kamus lokal berisikan tipe data yang ingin dimasukkan
    terdapat i
    */

    int i;//integer
    //Algoritma
    printf("masukan bilangan yang diinginkan: ");
    scanf("%f", &i);

    if (i > 0){
        printf(" i bilangan bulat positif: ");
    }else if (i < 0){
        printf(" i bilangan bulat negatif: ");
    }else if (i==0){
        printf("i = n/a ");

    }else{
        printf(" bukan termasuk sebuah bilangan: ");
    }

    return 0;

}
