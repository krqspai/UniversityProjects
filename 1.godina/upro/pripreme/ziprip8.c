_Bool txt2bin(char *inputFile, char *outputFile){
    FILE *f1=fopen(inputFile, "r");
    if (f1 == NULL){
        return 0;
    }
    FILE *f2=fopen(outputFile, "wb");
    if (f2 == NULL){
        return 0;
    }
    int a, b, c;
    struct record out;
    while (fscanf(f1, "%2d%3d%3d", &c, &a, &b)==3){;
        out.code=c;
        out.x=a;
        out.y=b;
        fseek(f2, (c-1) * sizeof(out), SEEK_SET);
        fwrite(&out, sizeof(out), 1, f2);
    }
    fclose(f1);
    fclose(f2);
    return 1;
}