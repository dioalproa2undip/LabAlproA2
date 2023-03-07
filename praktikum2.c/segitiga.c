/*
#Nama Program : cekSegitiga
#Definisi : Mengecek dan menampilkan sisi segitiga
#Nama Pembuat : Johanes D.K
#NIM : 24060122140155
#Tanggal : 05 Maret 2023
*/

#include <stdio.h>

int main(){
    //Kamus lokal
    /* kamus lokal berisikan tipe data yang ingin dimasukkan
    terdapat s1 s2 s3
    */

    float s1;//sisi segitiga satu
    float s2;//sisi segitiga dua
    float s3;//sisi segitiga tiga

    //Algoritma
    printf("Masukan sisi 1 segitiga: ");
    scanf("%d ", &s1);
    printf("Masukan sisi 2 segitiga: ");
    scanf("%d", &s2);
    printf("Masukan sisi 3 segitiga: ");
    scanf("%d", &s3);


    if((s1>0) && (s2>0) && (s3>0)){
     if ((s1 = s2) && (s1 = s3) && (s2 = s3)){
      printf("sisi 1: %d, sisi 2: %d, sisi3: %d,", s1, s2, s3);
      printf(" ini adalah segitiga sama sisi: ");
     }
      else if ((s1 = s2) || (s1 = s3) || (s2 = s3)) {
      printf("sisi 1: %d, sisi 2: %d, sisi 3: %d,", s1, s2, s3);
      printf("Ini adalah segitiga sama kaki");
    }else {
      printf("sisi 1: %d, sisi 2: %d, sisi 3: %d,", s1, s2, s3);
        printf("Ini adalah segitiga sembarang");
      }
    }else{
        printf(" Terdapat nilai yang bukan sisi segitiga");
     }
    return 0;

}
