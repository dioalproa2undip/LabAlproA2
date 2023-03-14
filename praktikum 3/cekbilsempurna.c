/*
#Nama Program : CekbilSemp
#Deskripsi :
#Nama : Johanes D.K
#NIM : 24060122140155
#Tanggal : 14 Maret 2023
*/

#include <stdio.h>

int main(){
    //kamus lokal
    /* kamus yang berisikan tipe data yang ingin dimasukkan
    terdapat N,i dan s
    */
    //Algoritma
    printf("program cek bilangan sempurna: \n");
    printf("============================== \n\n");


    int N;//biangan yang ingin di cek
    int i;//counter
    int s = 1;//

    s = 1;
    printf("masukkan bilangan: ");
    scanf("%i",&N);
    if (N <= 0 || N == 0){
        printf("N harus positif: ");
        s = 0;
    }
    else {
      for (i = 1; i< N / 1; i++){
        if (N % i == 0){
            s = s+i;
            break;
        }
      }
    }
    printf("\n");
    if ( s == N){
        printf("%i adalah bilangan sempurna: ",N);
    }else{
        printf("%i bukan bilangan sempurna; \n",N);
    }

    return 0;


}
