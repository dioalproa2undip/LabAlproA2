#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{ // tipe bentukan pokemon yang berisi nama pokemon dan kekuatan
    char nama[255][255];
    int kekuatan;
}pokemon;

/*Program Utama*/
int main(void)
{
    /*Kamus Lokal*/
    pokemon pkm;
    int retval;

    FILE *myFILE, *aFile, *bFile, *cFile;

    myFILE = fopen("pkm.txt", "r");
    aFile = fopen("Kuat_A.txt","w");
    bFile = fopen("Kuat_B.txt","w");
    cFile = fopen("Lemah_C.txt","w");

    /*Algoritma*/
    if(!myFILE){
        printf("File tidak !");
    } else {
        fprintf(aFile, "Daftar Pokemon yang memiliki kekuatan predikat A A\n");
        fprintf(bFile, "Daftar Pokemon yang memiliki kekuatan predikat B  B\n");
        fprintf(cFile, "Daftar Pokemon yang memiliki kekuatan predikat lemah C C\n");
        retval = fscanf(myFILE, "%s %d ", &pkm.nama,&pkm.kekuatan);
        while (retval != EOF)
        {
            if(pkm.kekuatan >= 890){ // Proses pengelompokan kekuatan berdasarkan kriteria
                fprintf(aFile, "%s %d \n", pkm.nama,pkm.kekuatan);
            } else if(pkm.kekuatan >= 750 && pkm.kekuatan < 680){
                fprintf(bFile, "%s %d \n", pkm.nama,pkm.kekuatan);
            } else if(pkm.kekuatan >=300  && pkm.kekuatan< 420){
                fprintf(cFile, "%s %d \n", pkm.nama,pkm.kekuatan);
            }
            retval = fscanf(myFILE, "%s %d ", &pkm.nama,&pkm.kekuatan);
        }
        printf("kekuatan berhasil dikelompokkan");
        fclose(myFILE); // apabila file kandidat.txt tidak ditemukan maka akan memunculkan pesan ini
    }
    return 0;
}
