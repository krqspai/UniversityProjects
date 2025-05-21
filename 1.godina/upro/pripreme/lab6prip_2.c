#include <stdio.h>
void BrojSlovaZnamenaka (char niz[101], int *brojSlova, int *brojZnamenaka){
    int x=0, y=0, i=0;
    printf("Unesite niz znakova > ");
    fgets(niz, 101, stdin);
    while (niz[i]!=10 && niz[i]!=0){
        if ((niz[i]>='a' && niz[i]<='z') || (niz[i]>='A' && niz[i]<='Z')) x=x+1;
        else if (niz[i] >= '0' && niz[i] <= '9') y=y+1;
        i=i+1;
   	}
    *brojZnamenaka=y;
    *brojSlova=x;
}