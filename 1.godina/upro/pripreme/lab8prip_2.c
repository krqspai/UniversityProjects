void GenerirajTelefonskiBroj(char *broj){
    int i=0;
    while (*(broj+i)!=10 && *(broj+i)!=0){
        if (*(broj+i)=='x'){
            *(broj+i)=rand() % 10 + 48;
        } else {
            *(broj+i)='-';
        }
        i++;
    }
}