/*header file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Program Utama*/
int main(void)
{
    /*Kamus Lokal*/
    int i, capacity;
    int kekuatan[100]; // array kekuatan
    char nama[10][255]; // array nama
    char (*name)[100]; // array pointer nama
    int retval;
    FILE *myFILE, *aFile, *bFile, *cFile;

    i = 0;
    myFILE = fopen("pkm.txt", "r");
    aFile = fopen("Kuat_A.txt","w");
    bFile = fopen("Kuat_B.txt","w");
    cFile = fopen("Lemah_C.txt","w");

    /*Algoritma*/
    if(!myFILE){
        printf("File tidak ditemukan!"); // Pesan muncul apabila file tidak ditemukan
    } else {
        retval = fscanf(myFILE, "%s %d ", &nama[0],&kekuatan[0]);
        while (retval != EOF)
        {
            i++;
            retval = fscanf(myFILE, "%s %d ", &nama[i],&kekuatan[i]);
        }
        capacity = i;
        name = malloc(capacity * sizeof(*name)); // alokasi name
        for(int s=0;s<capacity;s++){ // copy list nama dari array nama ke pointer array name
            strcpy(name[s], nama[s]);
        }
        fprintf(aFile, "Daftar Pokemon yang memiliki kekuatan predikat A A\n");
        fprintf(bFile, "Daftar Pokemon yang memiliki kekuatan predikat B B\n");
        fprintf(cFile, "Daftar Pokemon yang memiliki kekuatan predikat lemah C \n");
            for(int a=0;a<capacity;a++){ // proses input data ke masing-masing file kelompok kekuatan
                if(kekuatan[a] >= 890){
                    fprintf(aFile, "%s %d \n", name[a],kekuatan[a]);
                } else if(kekuatan[a] >= 750 && kekuatan[a] < 680){
                    fprintf(bFile, "%s %d \n", name[a],kekuatan[a]);
                } else if(kekuatan[a] >= 300 && kekuatan[a] < 420){
                    fprintf(cFile, "%s %d \n", name[a],kekuatan[a]);
                }
            }

            printf("kekuatan berhasil dikelompokkan");

            free(name); // membersihkan data pointer name
    }
    return 0;
}
