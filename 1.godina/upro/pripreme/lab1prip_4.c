#include <stdio.h>
int main(){
    int a;
    printf("Unesite broj dana > ");
    scanf("%d", &a);
    printf("Unos odgovara razdoblju od %d godina %d tjedana i %d dana\n", a/365, a%365/7, a%365%7);
    return 0;
}