struct pravokutnik {
    int x1;
    int y1;
    int x2;
    int y2;
};

void nadiNajveciOpseg(int n, struct pravokutnik* pravokutnici){
    int k=0, a, b, c;
    rjesenje = *(pravokutnici);
    for (int i=0; i<n; i++){
        a=(*(pravokutnici+i)).x2 - (*(pravokutnici+i)).x1;
        b=(*(pravokutnici+i)).y2 - (*(pravokutnici+i)).y1;
        if (a<0) a=-a;
        if (b<0) b=-b;
        c=a+b;
        if (c>k) {
            rjesenje = *(pravokutnici+i);
            k=c;
        }
    }
}