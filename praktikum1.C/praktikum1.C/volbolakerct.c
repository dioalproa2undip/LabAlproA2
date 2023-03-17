/*
# nama program : volbolakerct
# deskripsi : menghiutng volume bola kerucut
# nama : Johanes D.K
# nim ; 24060122140155
# tanggal : 18 Maret 2023
*/

#include <stdio.h>

int main(){
    //kamus lokal
    /* kamus yang berisikan tipe data yang ingin dimasukkan
    terdapat r, vb, vk dan phi
    */

    int vb;//volume bola
    int vk;//volume kerucut
    int r;//jari-jari
    float phi = 3.14;

    printf("Program menghitung volume bola kerucut: \n");
    printf("======================================= \n\n");
    scanf("d", &r);

    //menghitung volume bola
    vb = (4.0/3) * phi * r * r * r;
    printf("vb : %.2f\n",vb);

    //menghitung keliling kerucut
    vk = 1/2 * vb;
    printf("vk : %.3f\n", vk);

    return 0;
}
