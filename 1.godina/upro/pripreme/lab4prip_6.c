#include <stdio.h>
int main(){
    int i, j, n, s;
    printf("Unesite n > ");
    scanf("%d", &n);
    int a[n][n];
    int b[n];
    for (i=0; i<n; i=i+1){
        for (j=0; j<n; j=j+1){
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0; i<n; i=i+1){
        s=0;
        for (j=0; j<n; j=j+1){
            s=s+a[j][i];
        }
        b[i]=s;
    }
    printf("Rezultat > ");
    for (i=0; i<n-1; i=i+1){
        printf("%d ", b[i]-b[i+1]);
    }
    printf("%d\n", b[n-1]-b[0]);
    return 0;
}