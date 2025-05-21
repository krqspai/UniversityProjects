void obrni (char *src, char *dst){
    int k=0, i=0, f;
    while (*(src+i)!=0){
        k=k+1;
        i=i+1;
    }
    for (i=k; i>0; i--){
        f=k-i;
        *(dst+f)=*(src+(i-1));
    }
    *(dst+k)=0;
}