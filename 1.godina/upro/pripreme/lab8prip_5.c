#include <stdio.h>  
#include <string.h> 

#define MAX_DIONICA 100
#define MAX_DIONICA_U_PORTFELJU 20
#define MAX_NAZIV 20
#define MAX_OZNAKA 5

struct dionica_s {
    char oznaka[MAX_OZNAKA];
    float cijena;
    char naziv[MAX_NAZIV];
};

struct portfelj_s {
    char oznaka[MAX_OZNAKA];
    int kolicina;
};

float IzracunajVrijednostPortfelja(struct dionica_s *dionice, int broj_dionica, struct portfelj_s *moj_portfelj, int broj_dionica_u_mom_portfelju) {
    float k=0.0f;
    for (int i=0; i<broj_dionica_u_mom_portfelju; i++){
        for (int j=0; j<broj_dionica; j++){
            if (strcmp ((*(dionice+j)).oznaka, (*(moj_portfelj+i)).oznaka) == 0){
                k = k + (*(dionice+j)).cijena * (*(moj_portfelj+i)).kolicina;
            }
        }
    }
    return k;
}

int main ()
{
  int broj_dionica;
  printf ("Broj dionica: ");
  scanf ("%d", &broj_dionica);


  struct dionica_s dionice[MAX_DIONICA + 1];
  for (int i = 0; i < broj_dionica; i++)
    {
      scanf ("%s", dionice[i].oznaka);
      scanf ("%f", &dionice[i].cijena);
      scanf ("%s", dionice[i].naziv);
    }


  int broj_dionica_u_mom_portfelju;
  printf ("Broj dionica u mom portfelju: ");
  scanf ("%d", &broj_dionica_u_mom_portfelju);


  struct portfelj_s moj_portfelj[MAX_DIONICA_U_PORTFELJU + 1];
  for (int i = 0; i < broj_dionica_u_mom_portfelju; i++)
    {
      scanf ("%s", moj_portfelj[i].oznaka);
      scanf ("%d", &moj_portfelj[i].kolicina);
    }


  float ukupna_vrijednost = IzracunajVrijednostPortfelja (dionice, broj_dionica, moj_portfelj, broj_dionica_u_mom_portfelju);
  printf ("Vrijednost portfelja: %.2f", ukupna_vrijednost);


  return 0;
}