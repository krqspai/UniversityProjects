float zamijeniGlavnaD(float *p, int n){
    float a, k=0;
    for (int i=0; i<n/2; i++){
        a=*(p+(n*n-i*n-i-1));
        *(p+(n*n-i*n-i-1)) = *(p+i*n+i);
        *(p+i*n+i) = a;
    }
    for (int i=0; i<n; i++){
        k=k+*(p+(n-i-1)+i*n);
    }
    return k;
}