void generirajSlucajniRedak(int n, int *mat){
    int k=rand() % n;
    for(int i=k*n; i<(k+1)*n; i++){
        *(mat+i)=(rand() % 7 + 2);
    }
}