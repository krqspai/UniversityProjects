void increaseLowest(char *fileName, int percentage){
    FILE *f=fopen(fileName, "r+b");
    struct record x;
    int k, m=-1;
    while (fread(&x, sizeof(x), 1, f) == 1){
        if (x.salary<m || m<0){
            m=x.salary;
            k=x.code-1;
        }
    }
    fseek(f, (long)k * sizeof(x), SEEK_SET);
    fread(&x, sizeof(x), 1, f);
    x.salary+=(x.salary*percentage/100);
    fseek(f, -1L * sizeof(x), SEEK_CUR);
    fwrite(&x, sizeof(x), 1, f);
    fclose(f);
}