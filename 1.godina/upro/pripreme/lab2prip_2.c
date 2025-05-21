#include <stdio.h>
int main(){
    int a;
    printf("Unesite pH vrijednost otopine > ");
    scanf("%d", &a);
    if (a<0 || a>14) printf("KRIVI UNOS");
    else if (a<7) printf("Otopina je kisela.");
    else if (a>7) printf("Otopina je luznata.");
    else printf ("Otopina je neutralna.");
    return 0;
}