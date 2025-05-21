#include <stdio.h>
int main(){
    int i, c, b, n, x=0, y=0;
    do {
        printf("Unesite duljinu polja > ");
        scanf("%d", &n);
    } while (n<5 || n>10);
    int a[n];
    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    c=b=a[0];
    for (i=0; i<n; i++){
        if (a[i]>c){
            c=a[i];
            y=i;
        }
        if (a[i]<b){
            b=a[i];
            x=i;
        }
    }
    a[x]=c;
    a[y]=b;
    printf("Rezultat: ");
    for (i=0; i<n; i++){
        printf("%d", a[i]);
        if (i!=n-1) printf(", ");
    }
    return 0;
}