#include <stdio.h>
int main(){
    int k=0, i;
    char s[11];
    printf("Unesite niz znakova > ");
    fgets(s, 11, stdin);
    while (s[k]!=0 && s[k]!=10){
        k=k+1;
    }
    if (k==1){
        if(s[0] >= 'a' && s[0] <= 'z'){
            s[0]=s[0]+'A' - 'a';
        }
    } else {
        for (i=1; i<k-1; i++){
            if (s[i]==' '){
                if(s[i-1] >= 'a' && s[i-1] <= 'z'){
                    s[i-1]=s[i-1]+'A' - 'a';
                }
                if(s[i+1] >= 'a' && s[i+1] <= 'z'){
                    s[i+1]=s[i+1]+'A' - 'a';
                }
            }
        }
        if(s[0] >= 'a' && s[0] <= 'z'){
            s[0]=s[0]+'A' - 'a';
        }
        if(s[k-1] >= 'a' && s[k-1] <= 'z'){
            s[k-1]=s[k-1]+'A' - 'a';
        }
    }
    printf("Rezultat: ");
    for (i=0; i<k; i++){
        printf("%c", s[i]);
    }
    return 0;
}