#include <stdio.h>
#include <math.h>
double e_approx(int n){
    int i;
    long long a=1LL;
    double k=1.0, x=1.0;
    for (i=1; i<=n; i++){
        a=a*i;
        k=k+x/a;
    }
    return k;
}
int main(){
    int n;
    printf("Upisite broj n: ");
    scanf("%d", &n);
    double k=e_approx(n);
    printf("Aproksimacija e: %.12f", k);
    printf("Razlika: %.12f", k - exp(1));
    return 0;
}