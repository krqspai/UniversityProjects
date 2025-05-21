#include <stdio.h>

int djelitelj(int a, int b){
    int i, t;
    for (i=1; i<=b; i++){
        if (a%i==0 && b%i==0){
            t=i;
        }
    }
    return t;
}

void reduciraj(int a, int b){
    int t=djelitelj(a, b);
    a=a/t;
    b=b/t;
    if (b==1) printf("Reduciran: %d\n", a);
    else printf("Reduciran: %d/%d\n", a, b);
}

int main(){
    int a, b, c, d;
    printf("Upisite brojnik i nazivnik: ");
    scanf("%d %d", &a, &b);
    if (b==1) printf("Razlomak: %d\n", a);
    else printf("Razlomak: %d/%d\n", a, b);
    reduciraj(a, b);
    return 0;
}