/*
Name:FAITH NZEMBI 
Reg no:CT101/G/22641/24
Description :CAT2_Q3
*/
#include <stdio.h>
#include <stdlib.h>

void writeInputFile() {
    FILE *fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening input.txt for writing.\n");
        exit(1);
    }

    int num;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }

    fclose(fp);
}

void processFile() {
    FILE *fp = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");

    if (fp == NULL || out == NULL) {
        printf("Error opening files.\n");
        exit(1);
    }

    int num, sum = 0, count = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    double average = (double)sum / count;
    fprintf(out, "Sum = %d\nAverage = %.2f\n", sum, average);

    fclose(fp);
    fclose(out);
}

void displayFiles() {
    char ch;
    FILE *fp;

    printf("\nContents of input.txt:\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) { printf("Error opening input.txt.\n"); exit(1); }
    while ((ch = fgetc(fp)) != EOF) putchar(ch);
    fclose(fp);

    printf("\nContents of output.txt:\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) { printf("Error opening output.txt.\n"); exit(1); }
    while ((ch = fgetc(fp)) != EOF) putchar(ch);
    fclose(fp);
}

int main() {
    writeInputFile();
    processFile();
    displayFiles();
    return 0;
}
