/*
#Nama Program : CekBilPrima
#Deskripsi :
#Nama : Johanes D.K
#NIM : 24060122140155
#Tanggal : 14 Maret 2023
*/

#include <stdio.h>

int main(){
    //kamus lokal
    /* kamus berisikan tipe data yang ingin dimasukkan
    terdapat N,i dan jum
    */

    //Algoritma
     printf("program cek bilangan prima: \n ");
     printf("=========================== \n\n");

     int N;// bilangan yang ingin di cek
     int i;// counter
     int jum;//

     jum = 1;
     printf("input satu angka bulat: ");
     scanf("%i",&N);
     if (N <= 0 || N == 0 ) {
        printf("N harus positif : ");
        jum = 0;
     }
     else {
        for (i = 2; i<= N / 2; i++){
            if (N % i == 0{
             jum = 0;
             break;
            }
        }
     }
    printf("\n");
    if (jum == 2)
        printf("%i adalah angka prima \n",N);
    else
        printf("%i bukan angka prima \n",N);

    return 0;

}
