int brojJednakih(char *trgovina1, char *trgovina2){
    FILE *f1 = fopen(trgovina1, "r");
    if (f1 == 0){
        return -1;
    }
    FILE *f2 = fopen(trgovina2, "r");
    if (f2 == 0){
        return -1;
    }
    int k=0, a, x;
    char c, d;
    float b, y;
    while (fscanf(f1,"%4d%c%f", &a, &c, &b) == 3){
        while (fscanf(f2, "%4d%c%f", &x, &d, &y) == 3){
            if (a==x){
                k++;
            }
        }
        fseek(f2, 0L, SEEK_SET);
    }
    fclose(f1);
    fclose(f2);
    return k;
}