#include <stdio.h>
int main(){
    int a, b, i, s, j;
    printf("Upisite dva prirodna broja iz intervala [1, 1000] > ");
    scanf("%d %d", &a, &b);
    if (a<1 || a>1000 || b<1 || b>1000) printf("Brojevi moraju biti u intervalu [1, 1000].");
    else if (b<=a) printf("Prvi broj mora biti manji od drugog broja.");
    else {
        s=0;
        j=1;
        for (i=a; i<=b; i=i+1){
            if (j%3==0) s=s+i;
            j=j+1;
        }
        printf("Zbroj svakog treceg broja iznosi: %d", s);
    }
    return 0;
}