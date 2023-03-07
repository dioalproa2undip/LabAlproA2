/*
#Nama program : cekhar
#Deskripsi :mengecek dan menampilkan nama nama hari dari nomor yang di masukkanS
#Nama : Johanes D.K
#NIM : 24060122140155
#Tanggal : 06 Maret 2023
*/

#include <stdio.h>

int main(void){
    //kamus lokal
    /* kamus lokal berisikan tipe data yang ingin di masukan
    terdapat h
    */
    int H;//Hari

    printf("input angka hari (1-7): ");
    scanf("%d", &H);

    if (H==1){
        printf("senin");
    }
    else if (H==2){
        printf("selasa");
    }
    else if (H==3){
        printf("rabu");
    }
    else if (H==4){
        printf("kamis");
    }
    else if (H==5){
        printf("jumat");
    }
    else if (H==6){
        printf("sabtu");
    }
    else if (H==7){
        printf("minggu");
    }
    else{
        printf("pilihan tidak tersedia: ");
    }
    printf("\n");

    return 0;
}
