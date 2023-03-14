/*
#Nama Program : BilSempurN
#Deskripsi :
#Nama : Johanes D.K
#NIM : 24060122140155
#Tanggal : 14 Maret 2023
*/

#include <stdio.h>

int main(){
    //kamus lokal
    /* kamus berisikan tipe data yang ingin dimasukkan
    terdapat N,i,a,b,c,d,e,,ct
    */

    //Algoritma
    printf("Bilangan sempurna\nrangebil :");
    scanf("%d %d", &a,&b);
    for (i=a;i<=b;i++)
    {
    for(c=1,d=1,e=0,ct=0;c<i/2+1;c++)
    {
    if(i%c==0)
    {
    e+=c;
    N[ct]=c;
    ct++
    }
    }
    if(e==i)
    {
    while(d<ct)
    {
    printf("%d",N[d]);
    d++;
    if(d!=ct)
    printf("+");
    else
    printf("");
    }
    printf("=%d\n", e);
    }
    }
    return 0;
}
