#include <stdio.h>
int main(){
    char s[151];
    int i, k;
    printf("Upisite znakovni niz > ");
    fgets(s, 151, stdin);
    k=i=0;
    printf("Izlazni znakovni niz je : ");
    while (s[i] != 0){
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            printf("%c", s[i]);
            k=k+1;
        }
        i=i+1;
    }
    if (k==0) printf("prazan string");
    printf("\n");
    return 0;
}