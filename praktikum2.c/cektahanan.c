/*
#Nama Program : cektahanan
#Deskripsi : mengcek total tahanan
#Nama Pembuat : Johanes D.K
#NIM : 24060122140155
#Tanggal : 06 Maret 2023
*/

#include <stdio.h>

int main(void){

    //kamus lokal
    /*kamus lokal berisikan tipe data yang ingin dimasukan
    terdapat t1 t2 t3
    */

    int t1;//tahanan 1
    int t2;//tahanan 2
    int t3;//tahanan 3

    //Algoritma
    printf("masukan tahanan 1: ");
    scanf("%d", &t1);
    printf("masukan tahanan 2: ");
    scanf("%d", &t2);
    printf("masukan tahanan 3: ");
    scanf("%d", &t3);

    if ((t1>= 0) && (t2>= 0) &&(t3>= 0)){
        t1 = t1 + t2 + t3; //Menghitung total tahanan
        printf(" tahanan 1: %d, tahanan 2: %d, tahanan 3: %d,", t1,t2,t3);
        printf("total tahanan: ");

    }else{
    if((t1<0) || (t2<0) || (t3<0)){
        printf(" masukan tahanan tidak boleh negatif: ");
        }
    }
    return 0;


}
