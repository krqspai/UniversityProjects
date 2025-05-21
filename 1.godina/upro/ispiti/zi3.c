void delCharFromName(char *name, char c){
    int k=0, j=0;
    while (*(name+k)!=0 && *(name+k)!=10){
        k++;
    }
    char s[k+1];
    for (int i=0; i<=k; i++){
        if (*(name+i)!=c){
            s[j]=*(name+i);
            j++;
        }
    }
    s[j]=0;
    for (int i=0; i<=j; i++){
        *(name+i)=s[i];
    }
}