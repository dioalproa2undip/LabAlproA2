/*
#Nama Program : jarakGLBB
#Deskripsi : {Menghitung Jarak GLBB}
#Nama Pembuat : Johanes D.K
#NIM : 24060122140155
#Tanggal : 26 Februari 2023
*/

#include <stdio.h>

int main(){
    //kamus lokal
    /*kamus lokal berisikan tipe data yang ingin di masukkan
    terdapat vo s dan t
    */
   float s;//merupukan jarak
   float vo;//merupakann kecepatan
   float t;//waktu
   float a;//percepatan

   //Algoritma
   //Masukan rumus s
   s = vo*t + 1/2*(a*(t*t));
   printf("Masukan nilai input:");
   scanf("%f %f %f",&vo,&t,&a);
   printf("Hasil dari s adalah %.2f",s);

}
   

