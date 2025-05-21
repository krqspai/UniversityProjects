#include <stdio.h>
int main(){
    int i, k;
    char s[201];
    printf("Upisite znakovni niz > ");
    fgets(s, 201, stdin);
    for (i=0; i<201; i=i+1){
        if (s[i]==0){
            k=i;
            break;
        }
        if (s[i] <= 'z' && s[i] >= 'a'){
            s[i]=s[i]+'A'-'a';
        }
    }
    printf("Obrnuti niz: ");
    for (i=k-1; i>=0; i=i-1){
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}