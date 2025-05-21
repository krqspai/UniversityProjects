#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i, k=0;
    do {
        printf("Unesite n: ");
        scanf("%d", &n);
    } while (n<1);
    int a[n], polje[n];
    printf("Unesite clanove polja: ");
    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++){
        if (abs(a[i])%2==1){
            polje[k]=a[i];
            k=k+1;
        }
    }
    for (i=0; i<n; i++){
        if (abs(a[i])%2==0){
            polje[k]=a[i];
            k=k+1;
        }
    }
    printf("Modificirano polje: ");
    for (i = 0; i < n; i = i + 1) {
      printf("%d ", polje[i]);
    }
    return 0;
}