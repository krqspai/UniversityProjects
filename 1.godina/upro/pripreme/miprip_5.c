#include <stdio.h>
int main(){
    int i=0, j, a[10];
    float s=0.0f, v=0.0f;
    do {
        scanf("%d", &a[i]);
        i=i+1;
    } while (a[i-1]!=0 && i<11);
    if (a[0]==0){
        printf("0.00, 0.00");
    } else {
        for (j=0; j<i-1; j++){
            s+=a[j];
        }
        s=s/(i-1);
        for (j=0; j<i-1; j++){
            v=v+(a[j]-s)*(a[j]-s);
        }
        v=v/(i-1);
        printf("%.2f, %.2f", s, v);
    }
    return 0;
}