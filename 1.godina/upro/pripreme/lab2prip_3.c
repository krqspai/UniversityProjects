#include <stdio.h>
int main(){
    int n, i, j;
    printf("Unesite broj > ");
    scanf("%d", &n);
    if (n%2==0) printf("Neispravan unos!");
    else if (n==1) printf("\n*\n");
    else {
        printf("\n");
        int a=n/2;
        int b=1;
        for (i=1; i<=n/2+1; i=i+1){
            for (j=1; j<=a; j=j+1){
                printf(" ");
            }
            for (j=1; j<=b; j=j+1){
                printf("*");
            }
            printf("\n");
            a=a-1;
            b=b+2;
        }
        a=1;
        b=n-2;
        for (i=1; i<=n/2; i=i+1){
            for (j=1; j<=a; j=j+1){
                printf(" ");
            }
            for (j=1; j<=b; j=j+1){
                printf("*");
            }
            printf("\n");
            a=a+1;
            b=b-2;
        }
    }
    return 0;
}