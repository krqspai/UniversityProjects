#include <math.h>
#include <stdio.h>

void stddev(float *a, int n, float *std){
    int i;
    float b=0.0f;
    for (i=0; i<n; i++){
        b = b + *(a+i);
    }
    b=b/n;
    float c=0.0f;
    float d;
    for (i=0; i<n; i++){
        d=*(a+i)-b;
        c = c + d*d;
    }
    c=c/n;
    c=sqrt(c);
    *std=c;
}

int IndexOfMaxdev(float *a, int n, int m){
    float c=-0.1f, s;
    int i, k=0;
    for (i=0; i<n; i++){
        stddev(&a[i], m, &s);
        if (s>c){
            k=i;
            c=s;
        }
    }
    return k;
}

int main(void){
   float M[64];
   int m;
   int n;
   int index;
   scanf("%d", &n);
   scanf("%d", &m);
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
         scanf("%f", M+i*m+j);
      }
   }
   
   index = IndexOfMaxdev(M, n, m);
   printf("%d", index);


}