#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fin, *foutn, *foutg;
    if ((fin = fopen("f.txt", "r")) == NULL) {
        puts("Error opening input file");
        exit(1);
    }
    if ((foutn = fopen("n.txt", "w")) == NULL) {
        puts("Error opening output file for not odd numbers");
        exit(1);
    }
    if ((foutg = fopen("g.txt", "w")) == NULL) {
        puts("Error opening output file for odd numbers");
        exit(1);
    }

    int temp;
    while (!feof(fin)) {
        fscanf(fin, "%d", &temp);
        if (temp % 2 == 0) {
            fprintf(foutg, "%d ", temp);
        }
        else {
            fprintf(foutn, "%d ", temp);
        }
    }
    fclose(fin);
    fclose(foutg);
    fclose(foutn);
    return 0;
}
