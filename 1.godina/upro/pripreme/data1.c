void reuseVehicles(const char *vehiclesFilename, int fromYear, int belowWeight){
    FILE *f = fopen(vehiclesFilename, "r+b");
    struct Vehicle x;
    while (fread(&x, sizeof(x), 1, f) == 1){
        if (x.productionYear > fromYear && x.weightKilos < belowWeight) {
            x.isInUse=1;
        } else {
            x.isInUse=0;
        }
        fseek(f, -1L * (sizeof(x)), SEEK_CUR);
        fwrite(&x, sizeof(x), 1, f);
    }
    fclose(f);
}