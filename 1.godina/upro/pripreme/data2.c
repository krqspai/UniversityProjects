void generateReport(const char *employeesFilename, const char *positionsFilename, const char *outputFilename){
    FILE *f1 = fopen(employeesFilename, "rb");
    FILE *f2 = fopen(positionsFilename, "rb");
    FILE *f3 = fopen(outputFilename, "w");
    struct Employee x;
    struct Position y;
    while (fread(&x, sizeof(x), 1, f1) == 1){
        while (fread(&y, sizeof(y), 1, f2) == 1){
            if (y.idPosition == x.positionId){
                if (x.employedSinceYear > 2007){
                    fprintf(f3, "%s,%s;%d;%s\n", x.lastName, x.firstName, x.employedSinceYear, y.positionName);
                }
                fseek(f2, 0L, SEEK_SET);
                break;
            }
        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
}