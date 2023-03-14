/*
#Nama Program : FaktorBil
#Deskripsi : mengecek dan menampilkan faktor dari bilangan bulat
#Nama : Johanes D.K
#NIM : 24060122140155
#Tanggal : 13 Maret 2023
*/

#include <stdio.h>

int main(){
    //kamus lokal
    /* kamus lokal berisikan tipe data yang ingin di masukkan
    terdapat
    */
    int angka;//bilangan yang ingin di cek (N)
    int i;//counter

    //Algoritma
    printf("program mencari faktor dari bilangan\n");
    printf("Masukkan bilangan bulat positif:");
    scanf("%d", &angka);
    printf("faktor bilangan %d yaitu:",angka);
    for(i = 1;i<= angka;i++){
        //sisa bagi = 0 maka termasuk faktor
        if(angka %i==0){
            printf("%d",i)


    printf("\n\n\n");
    return 0;
}
