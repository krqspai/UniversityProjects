#include <stdio.h>
int PovecajKonvertiraj(float *iznos, int bonus, float *uvecanje){
    *uvecanje = bonus / *iznos * 100;
    *iznos=(*iznos + bonus) / 7.5345f;
    if (*uvecanje >= 10) {
        return 1;
    } else {
        return 0;
    }
}