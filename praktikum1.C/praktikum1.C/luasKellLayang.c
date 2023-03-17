/*
# Nama Program : luasKellLayang
# Deskripsi : Menghitung luas dan keliling layang layang
# Nama : Johanes D.K
# NIM : 24060122140155
# Tanggal : 18 Maret 2023
*/

#include <stdio.h>

int main(){
    //kamus lokal
    /* kamus yang berisikan tipe data yang ingin dimasukkan
    terdapat s1 s2 d1 dan d2
    */
    int s1;//sisi layang layang 1
    int s2;//sisi layang layang 2
    int d1;//diagonal layang layang 1
    int d2;//diagonal layang layang 2
    int luas;//luas layang layang
    int kell;//keliling layang layang

    printf("Program menghitung luas dan keliling layang layang: \n");
    printf("=================================================== \n\n");
    scanf("%d", &s1);
    scanf("%d", &s2);
    scanf("%d", &d1);
    scanf("%d", &d2);

    //menghitung luas
    luas = 1/2 * d1 * d2;
    printf(" luas : %d cm^2\n", luas);

    //menghitung keliling
    kell = 2 * (s1+s2);
    printf(" kell : %d cm\n", kell);

    return 0;
}
