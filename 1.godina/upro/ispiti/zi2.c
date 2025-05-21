double dist2D(double *mat, double *rez, int vel){
    double k=0;
    for (int i=0; i<vel; i++){
        if (i==0){
            *rez=sqrt(pow(*mat, 2) + pow(*(mat+1), 2));
            k=k+*rez;
        } else {
            *(rez+i)=sqrt(pow(*(mat+i*2)-*(mat+(i-1)*2), 2) + pow(*(mat+i*2+1)-*(mat+(i-1)*2+1), 2));
            k=k+*(rez+i);
        }
    }
    return k;
}