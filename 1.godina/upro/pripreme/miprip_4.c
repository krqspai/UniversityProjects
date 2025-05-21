#include <stdio.h>
int main(){
    int i, n, k=0;
    char s[21];
    printf("Upisite niz > ");
    fgets(s, 21, stdin);
    printf("Upisite poziciju > ");
    scanf("%d", &n);
    for (i=0; i<21; i++){
        if (s[i]!=10) {
            k=k+1;
        } else {
            break;
        }
    }
    if (n>k){
        printf("Neispravna pozicija");
    } else {
        i=0;
        printf("Rezultat: ");
        while (s[i]!='\n'){
            if (i>n-1){
                if (s[i] >= '0' && s[i] <= '9'){
                    s[i]='X';
                } else if (s[i] >= 'A' && s[i] <= 'Z'){
                    s[i] = s[i] + 'a' - 'A';
                }
            }
            if (i!=n-1) {
                printf("%c", s[i]);
            }
            i=i+1;
        }
    }
    return 0;
}