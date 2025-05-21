#include <stdio.h>
int main(){
    int a, b, c, i, j, k, n, s;
    printf("Upisite velicinu polja m > ");
    scanf("%d", &n);
    int m[n];
    printf("Upisite %d clanova polja m > ", n);
    for (i=0; i<n; i=i+1) {
        scanf("%d", &m[i]);
    }
    s=c=0;
    for (i=0; i<n; i=i+1){
        for (j=i; j<n; j=j+1){
            for (k=i; k<=j; k=k+1){
                s=s+m[k];
            }
            if (s>c){
                c=s;
                a=i;
                b=j;
            }
            s=0;
        }
    }
    printf("Pronadjeno pod-polje:");
    for (i=a; i<=b; i=i+1){
        printf(" %d", m[i]);
    }
    printf("\nNajveca suma kontinuiranog pod-polja je: %d", c);
    return 0;
}