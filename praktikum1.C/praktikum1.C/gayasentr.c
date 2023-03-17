/*
# Nama Program : gayasentr
# Deskripsi : menghitung gaya sentripetal
# Nama : Johanes D.K
# NIM : 24060122140155
# Tanggal : 18 Maret 2023
*/

#include <stdio.h>

int main(){
    //kamus lokal
    /* kamus yang berisikan tipe data yang ingin dimasukkan
    terdiri dari m,v dan r
    */

    int m;// massa
    int v;// kecepatan
    int r;// jari jari
    int F;//gaya

    printf("program menghitung gaya sentripetal: \n");
    printf("==================================== \n\n");
    scanf("%d", &m);
    scanf("%d", &v);
    scanf("%d", &r);

    //menghitung gaya sentripetal
    F = m * ( v * v / r);
    printf("F : %d\n", F);

    return 0;
}
