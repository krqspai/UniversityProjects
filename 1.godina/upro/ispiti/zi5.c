#include <stdio.h>

void compress (unsigned char *p, int len){
    for (int i=0; i<(len/2+len%2); i++){
        if (len%2==1 && i==len/2){
            *(p+i)=*(p+i*2)*16;
        } else {
            *(p+i)=*(p+i*2)*16 + *(p+i*2+1)%16;
        }
    }
}

int main(void) {
    int len;
    scanf ("%d", &len);
    unsigned char polje[len];
    for (int i = 0; i < len; i++) {
        polje[i] = i + 1;
    }    
    compress (&polje[0], len);
    for (int i = 0; i < len/2 + (len%2); i++) {
        printf("%u ", polje[i]);
    }
    return 0;
} 