void generirajLozinku (unsigned int sjeme, const char *znakoviZaLozinku, int duljLoz, char *lozinka){
    int k=strlen(znakoviZaLozinku);
    srand((unsigned) sjeme);
    for (int i=0; i<duljLoz; i++){
        *(lozinka+i)=*(znakoviZaLozinku + rand() % k);
    }
    *(lozinka+duljLoz)=0;
}