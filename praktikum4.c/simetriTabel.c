/*
#Nama Program : SimetriTabel
#Deskripsi :
#Nama : Johanes D.K
#NIM : 24060122140155
#Tanggal : 21 maret 2023
*/

#include <stdio.h>

int main(){
    int T1;//array
    int T2;//array
    int x1;//integer
    int x2;//integer
    int i;//counter

    //algoritma
    i = 0;
    i = i+1;
    if(T2[i]<= 0){
        printf("bilangan harus lebih besar dari nol: ");
    }
    i = 0;
    i = i+1;
    if(T1[i]<= 0){
        printf("bilangan harus lebih besar dari nol: ");
    }
    if (x1 == x2){
        i = 0;
        i = i+1;
        if(T1[i] == T2[i]){
            cek = cek+1;
        }
        if (cek == x1){
            printf("simetris: ");
            scanf("%d", &x1)
        }
        else ("tidak simetris: ");
    }
    return 0;
}
