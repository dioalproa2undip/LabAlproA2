/*
#Nama Program : cekbul
#Deskripsi : mengecek dan menampilkan nama nama bulan dari nomor yang di masukkan
#Nama Pembuat : Johanes D.K
#NIM : 24060122140155
#Tanggal : 06 Maret 2023
*/

#include <stdio.h>

int main(){
    //kamus lokal
    /*kamus berisikan tipe data yang ingin dimasukan
    terdapat M
    */
    int M;//

    printf("input angka bulan (1-12): ");
    scanf("%d",&M);

    if   (M==1){
        printf("januari");
    }
    else if (M==2){
        printf("februari");
    }
    else if (M==3){
        printf("Maret");
    }
    else if (M==4){
        printf("april");
    }
    else if (M==5){
        printf("mei");
    }
    else if (M==6){
        printf("juni");
    }
    else if (M==7){
        printf("juli");
    }
    else if (M==8){
        printf("Agustus");
    }
    else if (M==9){
        printf("September");
    }
    else if (M==10){
        printf("Oktober ");
    }
    else if (M==11){
        printf("November");
    }
    else if (M==12){
        printf("Desember");
    }
    else{
        printf("masukan nomor bulan tidak tepat:");
    }
    printf("\n");

    return 0;
}
