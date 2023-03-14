/*
# Nama Program : BilPrimaN
# Deskripsi :
# Nama : Johanes D.K
# NIM : 24060122140155
# Tanggal : 14 Maret 2023
*/

#include <stdio.h>

int main(){
    //kamus lokal
    /* kamus berisikan tipe data yang ingin dimasukkan
    terdapat N,i,a,b,c
    */

    //Algoritma
    printf("program bilangan prima: \n");
    printf("======================= \n\n");

    int N;//
    int i;//
    int a;//
    int b;//
    int c = i;//

    printf("angka awal : ");
    scanf("%d", &b);
    printf("Angka akhir: ");
    scanf("%d", &a);
    printf("\n maka deret bilangan primanya adalah:\n");

    for(i=b;i<=a;i++){
        if(i == 3)
        {
        printf("%d",i);
    }else{
        for(N=2;N<i;N++)
        {
            if(i% N==0)
            {
            c = 1;
            break;
    }else{
        c=0;
    }

        }
        if(c==0)
        {
        printf("%4d", i);
    }
    else{
        printf("");
    }
    }
    }
    printf("\n\n\n");
}
