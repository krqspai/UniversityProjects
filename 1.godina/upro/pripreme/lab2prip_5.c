#include <stdio.h>
int main(){
    int n, a;
    printf("Unesite broj > ");
    scanf("%d", &n);
    if (n<1) printf("Unesen je pogresan broj!");
    else {
        a=0;
        if (n%2==0){
            printf("Broj je djeljiv s brojem 2.");
            a=a+1;
        }
        if (n%3==0){
            if (a>0) printf("\n");
            printf("Broj je djeljiv s brojem 3.");
            a=a+1;
        }
        if (n%5==0){
            if (a>0) printf("\n");
            printf("Broj je djeljiv s brojem 5.");
            a=a+1;
        }
        if (n%7==0){
            if (a>0) printf("\n");
            printf("Broj je djeljiv s brojem 7.");
            a=a+1;
        }
        if (a==0) printf ("Broj nije djeljiv s brojevima 2, 3, 5, 7.");
    }
    return 0;
}