#include <stdio.h>
int main(){
    int a, i;
    printf("Unesite broj rijeci brojalice > ");
    scanf("%d", &a);
    if (a <= 0) printf("KRIVI UNOS");
    else {
        for (i=1; i<=a; i=i+1){
            if (i%3==1) printf("eci ");
            else if (i%3==2) printf("peci ");
            else printf("pec ");
        }
    }
    return 0;
}