#include <stdio.h>
#include <math.h>
int savrsen_kvadrat(int n){
    int i, a=0;
    float x=sqrt(n);
    for (i=1; i<=x; i++){
        if (i*i==n){
            a=1;
            break;
        }
    }
    return a;
}
int factorial(int a){
    int i, k=1;
    for (i=1; i<=a; i++){
        k=k*i;
    }
    return k;
}
int zbroj_znamenaka(int n){
    int k=0;
    while (n>0){
        k=k+n%10;
        n=n/10;
    }
    return k;
}
int main(){
    int n;
    printf("Upisite prirodni broj > ");
    scanf("%d", &n);
    if (savrsen_kvadrat(zbroj_znamenaka(factorial(n)))) printf ("Suma znamenaka od %d! je savrsen kvadrat.", n);
    else printf ("Suma znamenaka od %d! nije savrsen kvadrat.", n);
    return 0;
}