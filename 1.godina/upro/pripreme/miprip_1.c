#include <stdio.h>
int main(){
    int i, j, n;
    do {
        printf("Upisite n > ");
        scanf("%d", &n);
    } while (n<=0);
    int a[n][n];
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0; i<n; i++){
        if (i%2==0){
            a[i][n-i-1]=0;
        } else {
            a[i][n-i-1]=1;
        }
    }
    printf("Rezultat:\n");
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}