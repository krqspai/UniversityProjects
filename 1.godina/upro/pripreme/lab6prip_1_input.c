#include <stdio.h>
#include <stdlib.h>
int ProvjeriPravokutnik(int a, int b, int c, int d){
    if (a==c || b==d){
        return 0;
    } else {
        return 1;
    }
}
int IzracunajDuljinuStranice(int a, int b){
    return (abs(a-b));
}
int IzracunajOpseg(int a, int b, int c, int d){
    return(2*abs(a-c)+2*abs(b-d));
}
int IzracunajPovrsinu(int a, int b, int c, int d){
    return(abs(a-c)*abs(b-d));
}
void IzracunaOpsegPovrsinu(int *opseg, int *povrsina){
    int a, b, c, d, x, y, o, p;
    printf("Unesite koordinate za tocku 1 > ");
    scanf("%d %d", &a, &b);
    printf("Unesite koordinate za tocku 2 > ");
    scanf("%d %d", &c, &d);
    if (ProvjeriPravokutnik(a, b, c, d) == 0){
        *opseg = -1;
        *povrsina = -1;
    } else {
        x=IzracunajDuljinuStranice(a, c);
        y=IzracunajDuljinuStranice(b, d);
        o=IzracunajOpseg(a, b, c, d);
        p=IzracunajPovrsinu(a, b, c, d);
        *opseg=o;
        *povrsina=p;
    }
}