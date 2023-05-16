/*
#Nama : Johanes D.K
#NIM : 24060122140155
#Tanggal : 14 Mei 2023
*/

#include <stdio.h>
int main(){
    int N, i, X;
    int ketemu = 0;

    printf("Pencarian Data dengan Algoritma Sequential Search\n\n");
    printf("Input Banyak Data\t: ");
    scanf("%d", &banyakData);
    int data[N];

    printf("Input Kumpulan Data\t: ");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &data[i]);
    }

    printf("Input Data yang Dicari  : ");
    scanf("%d", &X);

    for(i = 0; i < N; i++)
    {
        if(X == data[i])
        {
            ketemu = 1;
            printf("Hasil Pencarian \t: Data Ditemukan pada Indeks ke - %d\n", i);
            break;
        }
    }

    if(ketemu == 0)
        printf("Hasil Pencarian \t  : Data Tidak Ditemukan\n");

    getch();
    return 0;
}
