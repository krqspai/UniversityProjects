#include <stdio.h>
int main(){
    int a=0, b=257, i=0, x=0, y=0;
    char s[31];
    printf("Upisite niz > ");
    fgets(s, 31, stdin);
    while (s[i]!=10 && s[i]!=0){
        if (s[i]>a){
            a=s[i];
            x=i;
        }
        if (s[i]<=b){
            b=s[i];
            y=i;
        }
        i++;
    }
    printf("imin = %d, imax = %d\n", y, x);
    if (y<x){
        for (i=y; i<=x; i++){
            printf("%c", s[i]);
        }
    } else {
        for (i=y; i>=x; i--){
            printf("%c", s[i]);
        }
    }
    return 0;
}