#include <stdio.h>
int main(){
    int i=1, k=0, p[10000];
    printf("Unesite prirodni broj > ");
    scanf("%d", &p[0]);
    if (p[0]==1) k=k+1;
    printf("Rezultat: %d, ", p[0]);
    while (k<3){
        if (p[i-1]%2==1){
            p[i]=p[i-1]*3+1;
        } else {
            p[i]=p[i-1]/2;
        }
        if (p[i]==1) k=k+1;
        printf("%d", p[i]);
        if (k<3) printf(", ");
        i=i+1;
    }
    return 0;
}