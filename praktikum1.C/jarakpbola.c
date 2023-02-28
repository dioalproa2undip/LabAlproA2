/*
#Nama Program : jarakPBola
#Deskripsi: Menghitung jarak para bola 
#Nama Pembuat: Johanes D.K
#NIM : 24060122140155
#Tanggal : 26 Februari 2023
*/

#include <stdio.h>

int main(){
    //kamus lokal
    /*kamus lokal berisikan tipe data yang ingin di masukkan
    terdapat vo t g y 
    */
   float vo;//merupakan kecepatan awal
   float t;//merupakan waktu 
   float g;//merupakan konstanta gravitasi
   float y;//merupakan jarak 

   //Algoritma
   //Masukan rumus y
   y = vo*t - 1/2*(g*t);
