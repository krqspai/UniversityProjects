#include <stdio.h>
#define MAX 10

int main(void) {
    struct {
        int sif_art;
        int kolicina; // količina artikla sa šifrom sif_art na skladištu
        float cijena; // cijena pojedinačnog artikla sa šifrom sif_art
    } artikli[MAX] = {{1, 2, 3.2f}, {2, 12, 4.2f}, {3, 2, 3.2f}, {4, 2, 3.2f}, {5, 2, 3.2f}, {6, 2, 3.2f}, {7, 2, 3.2f}, {8, 2, 4.2f}, {9, 2, 3.2f}, {10, 2, 3.2f}};  
    // izostavljena je inicijalizacija strukture u kojoj je inicijalizirano upravo MAX elemenata
    
    int i;
    float ukupna_cijena;
// (*) IZRAČUN VRIJEDNOSTI VARIJABLE ukupna_cijena
    ukupna_cijena=0.0f;
    for (i=0; i<MAX; i++){
        ukupna_cijena += artikli[i].kolicina * artikli[i].cijena;
    }
    printf("%5.2f\n", ukupna_cijena);
    return 0;
}