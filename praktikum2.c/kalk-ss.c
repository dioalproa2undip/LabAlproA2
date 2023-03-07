/*
#Nama Program : kalk-ss
#Deskripsi :
#Nama Pembuat : Johanes D.K
#NIM : 24060122140155
#Tanggal : 5 Maret 2023
*/

#include <stdio.h>
    int main(){
    //kamus lokal
    /*kamus lokal yang berisikan tipe data yang ingin di masukkan
    terdapat iA iB i a b c d e f
    */

    int iA;//
    int iB;//
    int  i=// pilihan operasi
    int (a)= (iA+iB);//mencari penjumlahan iA+iB
    int (b)= (iA-iB);//mencari pengurangan iA-iB
    int (c)= (iA*iB);//mencari perkalian iA*iB
    int (d)= (iA/iB);//mencari pembagian iA/iB
    int (e)= (iA/iB);//operasi division iA div iB
    int (f)= (iA%iB);//operasi modulo iA mod iB

    //Algoritma
    //masukkan pilihan operasi
    printf("input pilihan operasi; ")
    scanf("%s", &i);
    scanf("%d %d", &iA,&iB);

    printf("\n");

    if (i == "a");{
        hasil = iA+iB;
        printf("%d",hasil);
    }
    else if (i == "b");{
        hasil = iA-iB;
        printf("%d",hasil);
    }
    else if (i == "c");{
        hasil = iA*iB;
        printf("%d",hasil);
    }
    else if (i == "d");{
        hasil = iA/iB;
        printf("%d", hasil);
    }
    else if (i == "e");{
        hasil = iA/iB;
        printf("%d", hasil);
    }
    else if (i == "f");{
        hasil = iA%iB;
        printf("%d",hasil);
    }
    else
        printf("bukan pilihan menu yang benar:");

    return 0;

}

