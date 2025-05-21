tocka_t *pokNaNajblizuTocku(tocka_t *tocke, int n){
    tocka_t *p=tocke;
    double m=sqrt((*tocke).x * (*tocke).x + (*tocke).y * (*tocke).y);
    double k;
    for (int i=1; i<n; i++){
        k=sqrt((*(tocke+i)).x * (*(tocke+i)).x + (*(tocke+i)).y * (*(tocke+i)).y);
        if (k<=m){
            m=k;
            p=tocke + i;
        }
    }
    return p;
}