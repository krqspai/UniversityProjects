#include <stdio.h>
#include <math.h>

float median(float a, float b, float c){
    float m;
    if ((a>=b && a<=c) || (a>=c && a<=b)) m=a;
    else if ((b>=a && b<=c) || (b>=c && a<=a)) m=b;
    else m=c;
    return m;
}
int main(){
    float a, b, c;
    printf("Upisite tri realna broja > ");
    scanf("%f %f %f", &a, &b, &c);
    float s=(a+b+c)/3;
    printf("Apsolutna vrijednost razlike mediana i srednje vrijednosti je: %.3f", fabsf(s-median(a, b, c)));
    return 0;
}