#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b, c;
    printf("Unesite cetveroznamenkasti broj > ");
    scanf("%d", &a);
    b=a/1000 + a%100/10;
    c=a%1000/100 + a%10;
    if (b == c){
        printf("Provjera je uspjesna!\n");
    } else {
        printf("Apsolutna razlika suma je %d\n", abs(b-c));
    }
    return 0;
}