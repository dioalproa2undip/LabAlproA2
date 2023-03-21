/*
# Nama Program : JumFrekNilTabel
# Deskripsi
# Nama : Johanes D.K
# NIM : 24060122140155
# Tanggal : 21 Maret 2023
*/

#include <stdio.h>

int main(){
    int n,count,sum;
    int arr[100],freq[100];

    int i,j;

    printf("masukan jumlah elemen array:");
    scanf("%d", &n);

    //input elemen array
    printf("masukan elemen array: \n");
    for (i = 0;i <n;i++){
        scanf("%d", &arr[i]);
        freq[i] = -1;//inisialisasi frekuensi dengan -1

    }
    //hitung frekuensi kemunculan setiap elemen
    for (i=0;i<n;i++){
        count =1;
        for (j=1+ 1;j <n;j++){
            if(arr[i]== arr[j]){
                count ++;
                arr[j]=0;//memgubah nilai yang sama menjadi 0
                freq[j]=0;//set frekuensi ke 0 untuk menghindari penghitungan berulang

            }
        }
            if (freq[i]!=0){
                freq[i] = count;
            }
    }
    /* for (i = 0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    for (i = 0;i<n;i++){
        printf("%d", freq[i]);
    }*/
    //tampilkan jumlah elemen yang frekuensinya lebih dari 1
        sum = 0;
        for (i=0;i<n;i++){
            if(freq[i]>1){
                sum +=arr[i] * freq[i];//tambahkan nilai elemen yang frekuensinya lebih dari 1 variabel sum
                    //printf("\n%d", sum);
            }
        }

        printf("\n jumlah elemen dengan frekuensi lebih dari 1: %d", sum);

        return 0;
}
