void transponiraj(int* src, int* dst, int n, int m){
    int i, j;
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            *(dst+j*n+i)=*(src+i*m+j);
        }
    }
}