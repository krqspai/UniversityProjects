#include <stdio.h>
int main(){
    int n, i, x, y;
    printf("Unesite broj clanova polja:");
    scanf("%d", &n);
    int a[n];
    printf("\nUnesite clanove polja (%d):", n);
    for (i=0; i<n; i=i+1){
        scanf("%d", &a[i]);
    }
    printf("Unesite vrijednost novog clana te indeks:");
    scanf("%d %d", &x, &y);
    int b[n];
    for (i=0; i<y; i=i+1) b[i]=a[i];
    b[y]=x;
    for (i=y+1; i<n; i=i+1) b[i]=a[i-1];
    printf("Pocetno polje\n");
    for (i=0; i<n; i=i+1){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Novodobiveno polje\n");
    for (i=0; i<n; i=i+1){
        printf("%d ", b[i+1]);
    }
    return 0;
}