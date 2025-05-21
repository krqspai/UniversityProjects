#include <stdio.h>
int main(){
    int i, n, s=0;
    double k=0.0;
    printf("Unesite n > ");
    scanf("%d", &n);
    if (n<1){
        printf("Neispravan n");
    } else {
        for (i=1; i<=n; i++){
            s=s+i;
            k=k+(1.0/s);
        }
        printf("%.9f", k);
    }
    return 0;
}