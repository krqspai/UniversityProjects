#include <stdio.h>
int main(){
    float a, b;
    char s[20];
    printf("unesite prvi argument > ");
    scanf("%f", &a);
    printf("unesite operand > ");
    scanf("%s", &s);
    printf("unesite drugi argument > ");
    scanf ("%f", &b);
    if (s=="plus") printf("%f + %f = %f", a, b, a+b);
    else if (s=="minus") printf("%f - %f = %f", a, b, a-b);
    else if (s=="puta") printf("%f * %f = %f", a, b, a*b);
    else if (s=="podijeljeno") printf("%f / %f = %f", a, b, a/b);
    else if (s=="potencija") printf("%f ^ %f = %f", a, b, a*b);
    else printf("POGRESKA! operator nije podrzan (jos)");
    return 0;
}