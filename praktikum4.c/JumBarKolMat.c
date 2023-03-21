/*
# Nama Program : JumBarKolMat
# Deskripsi :
# Nama : Johanes D.K
# NIM : 24060122140155
# Tanggal : 21 Maret 2023
*/

#include <stdio.h>

int main(){
    printf("Program input matriks 2 dimensi: \n");
    printf("================================ \n\n");

    int matriks[100][100];
    int jum_baris, jum_kolom, i,j;

    printf("input jumlah baris matriks: ");
    scanf("%d", &jum_baris);
    printf("input jumlah kolom matriks: ");
    scanf("%d", &jum_kolom);

    //proses input array
    for(i = 0;i < jum_baris ; i++){
        for(j = 0; j < jum_kolom; j++){
            printf("baris; i+1, kolom; j+1 :");
            scanf("%d", &matriks[i][j]);
        }
    }
    printf("hasil matriks: ");

    //menampilkan array
    for (i = 0;i < jum_baris; i++){
        for(j = 0; j < jum_kolom; j++){

        }
    }
    return 0;
}
