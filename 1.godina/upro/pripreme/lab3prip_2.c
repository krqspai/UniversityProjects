#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int e, b, c, d, m, n, i, j;
    printf("Unesi dimenzije:");
    scanf("%d %d", &m, &n);
    if (m!=n) printf("\nDimenzije ne odgovaraju kvadratnoj matrici!");
    else {
        int a[m][n];
        printf("\nUnesi clanove polja:");
        for (i=0; i<m; i=i+1){
            for (j=0; j<n; j=j+1){
                scanf("%d", &a[i][j]);
            }
        }
        printf("\nOdabrana je matrica:\n");
        for (i=0; i<m; i=i+1){
            for (j=0; j<n; j=j+1){
                printf(" %d", a[i][j]);
            }
            printf("\n");
        }
        e=b=0;
        for (i=0; i<n; i=i+1){
            e=e+pow(a[i][i], 2);
            b=b+pow(a[i][n-i-1], 2);
        }
        printf("Razlika zbrojeva je %d.", abs(e-b));
        return 0;
    }
}