#include <stdio.h>
int main(){
    int i, j, m, k, x;
    printf("Unesite m > ");
    scanf("%d", &m);
    int a[m][m];
    int p[m];
    for (i=0; i<m; i++){
        for (j=0; j<m; j++){
            scanf("%d", &a[i][j]);
            if (i==j){
                p[i]=a[i][j];
            }
        }
    }
    for (i=0; i<m-1; i++){
        k=p[i];
        for (j=i+1; j<m; j++){
            if (p[j]<k){
                k=p[j];
                x=j;
            }
        }
        if (p[i]>k){
            p[x]=p[i];
            p[i]=k;
        }
    }
    for (i=0; i<m; i++){
        a[i][i]=p[i];
    }
    printf("Ispis:\n");
    for (i=0; i<m; i++){
        for (j=0; j<m; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}