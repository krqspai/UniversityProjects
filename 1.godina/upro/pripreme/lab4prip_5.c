#include <stdio.h>
int main(){
    int i, j, n, x, y, s;
    printf("Upisite broj redaka/stupaca matrice > ");
    scanf("%d", &n);
    int a[n][n];
    printf("Upisite %dx%d clanova > ", n, n);
    for (i=0; i<n; i=i+1){
        for (j=0; j<n; j=j+1){
            scanf("%d", &a[i][j]);
        }
    }
    s=0;
    printf("\nUpisite redni broj retka > ");
    scanf("%d", &x);
    printf("Upisite redni broj stupca > ");
    scanf("%d", &y);
    for (i=0; i<n; i=i+1){
        s=s+a[x][i];
    }
    for (i=0; i<n; i=i+1){
        s=s+a[i][y];
    }
    s=s-a[x][y];
    printf("Suma brojeva koji se nalaze u retku %d i stupcu %d je %d.", x, y, s);
    return 0;
}