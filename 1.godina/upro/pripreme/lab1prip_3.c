#include <stdio.h>
int main(){
    int a;
    printf("Upisite iznos u kn > ");
    scanf("%d", &a);
    printf("Kovanice:\n");
    if (a/5 > 0) {
        printf("%d x 5 kn\n", a/5);
    }
    if (a%5/2 > 0) {
        printf("%d x 2 kn\n", a%5/2);
    }
    if (a%5%2 > 0) {
        printf("%d x 1 kn\n", a%5%2);
    }
    return 0;
}