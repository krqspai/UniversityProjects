#include <stdio.h>
int main(){
    int i, j, m, n;
    printf("Unesite dimenzije polja: ");
    scanf("%d", &n);
    int p[n][n];
    printf("\nUnesite elemente polja:\n");
    for (i=0; i<n; i=i+1){
        for (j=0; j<n; j=j+1){
            scanf("%d", &p[j][n-i-1]);
        }
    }
    printf("Izracunato polje:\n");
    for (i=0; i<n; i=i+1){
        for (j=0; j<n; j=j+1){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    return 0;
}