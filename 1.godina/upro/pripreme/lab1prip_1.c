#include <stdio.h>
int main() {
    int a, b, c;
    printf("Upisite troznamenkasti prirodni broj > ");
    scanf("%d", &a);
    b = c = 0;
    if ((a / 100) % 2 == 0){
        b = b + a / 100;
    } else {
        c = c + a / 100;
    }
    if ((a / 10 % 10) % 2 == 0){
        b = b + a / 10 % 10;
    } else {
        c = c + a / 10 % 10;
    }
    if ((a % 10) % 2 == 0){
        b = b + a % 10;
    } else {
        c = c + a % 10;
    }
    printf("Rezultat: %d\n", b-c);
    return 0;
}