#include <stdio.h>
#include <stdlib.h>

struct listic dobitni;

void IzvlacenjeLota_6_od_45(int* kombinacija)
{
   for (int i=0; i<6; i++){
        *(kombinacija+i)=rand() % 45 + 1;
   }
}

struct listic {
    long serijski_broj;
    int odigrana_kombinacija[6];
};

void ObradaIgre (struct listic *svi_listici, int N, int *izvuceni_brojevi){
    int k=1, p=0;
    for (int i=0; i<N; i++){
        k=1;
        for (int j=0; j<6; j++){
            if (*(izvuceni_brojevi + j) != (*(svi_listici + i)).odigrana_kombinacija[j]){
                k=0;
            }
        }
        if (k==1){
            p=1;
            dobitni.serijski_broj = (*(svi_listici + i)).serijski_broj;
            for (int j=0; j<6; j++){
                dobitni.odigrana_kombinacija[j] = (*(svi_listici + i)).odigrana_kombinacija[j];
            }
        }
    }
    if (p==0){
        dobitni.serijski_broj = -1l;
    }
}

int main() {
    int n=0;


//incijalizacija varijabli
dobitni.serijski_broj = 0;
for (int b = 0; b < 6; b++)
    dobitni.odigrana_kombinacija[b] = 0;
struct listic igra[100];

scanf("%d", &n); //učitaj broj listića u igri
for (int z = 0; z < 100; z++)
{
    igra[z].serijski_broj = 0;
    igra[z].odigrana_kombinacija[0] = 0;
    igra[z].odigrana_kombinacija[1] = 0;
    igra[z].odigrana_kombinacija[2] = 0;
    igra[z].odigrana_kombinacija[3] = 0;
    igra[z].odigrana_kombinacija[4] = 0;
    igra[z].odigrana_kombinacija[5] = 0;

}
    
for (int k = 0; k < n; k++)
{
      
    scanf("%ld %d %d %d %d %d %d", &igra[k].serijski_broj, &igra[k].odigrana_kombinacija[0],
        &igra[k].odigrana_kombinacija[1], &igra[k].odigrana_kombinacija[2], &igra[k].odigrana_kombinacija[3],
        &igra[k].odigrana_kombinacija[4], &igra[k].odigrana_kombinacija[5]);        
}
    

    //izvlačenje
    int izvucenakombinacija[6], seed=0;
    scanf("%d", &seed);
    srand(seed);
    IzvlacenjeLota_6_od_45(izvucenakombinacija);

   

    ObradaIgre(igra, n, izvucenakombinacija);

    if (dobitni.serijski_broj != -1) {
        printf("serijski broj dobitnog listica je: %ld\n", dobitni.serijski_broj);
        printf("dobitna kombinacija je:");
            for (int j = 0; j < 6; j++)
                printf(" %d", dobitni.odigrana_kombinacija[j]);
    }
    else
            printf("Nije izvucen dobitni 6!!\n");   

}