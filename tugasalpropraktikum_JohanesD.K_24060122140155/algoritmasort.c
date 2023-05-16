/*
#NAMA : Johanes D.K
#NIM : 24060122140155
#TANGGAL : 16 Mei 2023
*/

#include <stdio.h>
#include <conio.h>
int i,k,n,t,imax, B[100];
int main()
{
    printf("masukan array yang di input = ");
    scanf("%i", &n);
    for(i=1;i<=(n-1); i++)
    {
        printf("B[%i]=",i);
        scanf("%i", &B[i]);
    }
    for(i=1;i<=(n-1); i++)
    {
        imax= i;
        for(k=(i+1);k<=n;k++)
        {
            if(B[k]< B[imax])
            {
                imax =k;
            }
        }
    t= B[imax];
    B[imax] = B[i];
    B[i]=t

    printf ("\nsetelah diurutkan dengan insertion sort maka :");
    for (i=1;i<=n;i++)
    {
        printf("\nB[%i] = %i", i,B[i]);
    }

}
