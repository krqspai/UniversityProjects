#include <stdio.h>
int main(){
    int n, i, j, c;
    printf("Unesite duljinu polja: ");
    scanf("%d", &n);
    int a[n];
    int b[n];
    printf("Unesite elemente polja: ");
    for (i=0; i<n; i=i+1){
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i=i+1){
        c=0;
        for (j=i; j<n; j=j+1){
            c=c+a[j];
        }
        b[i]=c;
    }
    printf("Izracunato polje:");
    for (i=0; i<n; i=i+1){
        printf(" %d", b[i]);
    }
    printf("\n");
    return 0;
}