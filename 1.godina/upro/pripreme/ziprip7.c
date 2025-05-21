void igra(int seed, int brojBacanja, int *pobjednik, int *razlika){
    int a=0, b=0;
    srand((unsigned) seed);
    for (int i=0; i<brojBacanja; i++){
        a=a+(rand()%6+1);
        b=b+(rand()%6+1);
    }
    if (a>b){
        *pobjednik = 1;
        *razlika = a-b;
    } else if (a<b){
        *pobjednik = 2;
        *razlika = b-a;
    } else {
        *pobjednik = 0;
        *razlika = 0;
    }
}