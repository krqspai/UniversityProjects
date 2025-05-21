#include <stdio.h>
int main(){
    int i, k, b, l;
    char s[51];
    printf("Unesite niz > ");
    fgets(s, 51, stdin);
    int a[128] = {0};
    i=0;
    while (s[i] != 0){
        a[s[i]]++;
        i=i+1;
    }
    a[10]=a[10]-1;
    k=b=0;
    for (i=0; i<128; i=i+1){
        if (a[i] > k){
            k=a[i];
            b=1;
            l=i;
        }
        else if (a[i] == k){
            b=b+1;
        }
    }
    if (b==1){
        printf("Znak \"%c\" se ponavlja %d puta.\n", l, k);
    }
    else {
        printf("Znakovi ");
        for (i=0; i<128; i=i+1){
            if (a[i]==k){
                if (b>1) {
                    printf("\"%c\", ", i);
                } else {
                    printf ("\"%c\"", i);
                }
                b=b-1;
            }
        }
        printf(" se ponavljaju %d puta.\n", k);
    }
    return 0;
}