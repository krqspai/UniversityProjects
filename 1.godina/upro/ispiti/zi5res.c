void compress (unsigned char *p, int len){
    for (int i=0; i<(len/2+len%2); i++){
        if (len%2==1 && i==len/2){
            *(p+i)=*(p+i*2)*16;
        } else {
            *(p+i)=*(p+i*2)*16 + *(p+i*2+1);
        }
    }
}