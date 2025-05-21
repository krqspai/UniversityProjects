int nulovanje(int *p, int m, int n){
    int k=0, x=0, y=0, c=-1;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (*(p+i*n+j)==c && x<i){
                x=i;
                y=j;
            } else if (*(p+i*n+j)>c) {
                x=i;
                y=j;
                c=*(p+i*n+j);
            }
        }
    }
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (i==x || j==y){
                k=k+*(p+i*n+j);
                *(p+i*n+j)=0;
            }
        }
    }
    return k;
}