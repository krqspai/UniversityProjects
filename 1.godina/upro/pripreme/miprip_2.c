#include <stdio.h>
int main(){
    int s, i=1, n, p[10000];
    printf("Upisite tri prirodna broja > ");
    scanf("%d %d %d", &p[1], &p[2], &n);
    s=p[1];
    printf("Rezultat: ");
    while(s<n){
        printf("%d", p[i]);
        i=i+1;
        if (i>2){
            if (i%2==1){
                p[i]=p[i-2]*3;
            } else {
                p[i]=p[i-2]*2;
            }
        }
        s+=p[i];
        if (s<n){
            printf(", ");
        }
    }
    return 0;
}