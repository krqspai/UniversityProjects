#include <stdio.h>
#define MAX_DIM 32

int dot_produkt (int *a, int *b, int n){
    int i;
    int s=0;
    for (i=0; i<n; i++){
        s = s + *(a+i) * *(b+i);
    }
    return s;
}

void mat_vec_produkt(int *X, int *a, int n, int *ret){
    int i;
    for (i=0; i<n; i++){
        *(ret+i)=dot_produkt(&X[i*n], a, n);
    }
}

int main (void){
    int X[MAX_DIM*MAX_DIM], a[MAX_DIM], n, rez[MAX_DIM], i;


   scanf("%d", &n);


   for(i=0; i < n*n; i++)
      scanf("%d", &X[i]);


   for(i=0; i < n; i++)
       scanf("%d", &a[i]);


   mat_vec_produkt(X, a, n, rez);


   for(i = 0; i < n; i++)
      printf("%d ", rez[i]);


   return 0;
}