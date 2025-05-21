void analyzeGrades(const char *studentsFilename, const char *reportFilename){
    FILE *f1 = fopen(studentsFilename, "rb");
    FILE *f2 = fopen(reportFilename, "w");
    struct Student x, y;
    int s=0, m=-1;
    while (fread(&x, sizeof(x), 1, f1) == 1){
        s=0;
        for (int i=0; i<5; i++){
            s=s+x.points[i];
        }
        fprintf(f2, "%s %s %d\n", x.firstName, x.lastName, s);
        if (s>m){
            y=x;
            m=s;
        }
    }
    fprintf(f2, "Najbolji rezultat: %s %s", y.firstName, y.lastName);
    fclose(f1);
    fclose(f2);
}