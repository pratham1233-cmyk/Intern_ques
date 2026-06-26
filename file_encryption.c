#include <stdio.h>

int main() {
    char input[100], output[100];
    int key;
    printf("Enter input filename: ");
    scanf("%s", input);
    printf("Enter output filename: ");
    scanf("%s", output);
    printf("Enter XOR key (0-255): ");
    scanf("%d", &key);
    FILE *fin = fopen(input, "rb");
    FILE *fout = fopen(output, "wb");
    if (!fin || !fout) { printf("File error\n"); return 1; }
    int ch;
    while ((ch = fgetc(fin)) != EOF) fputc(ch ^ key, fout);
    fclose(fin);
    fclose(fout);
    printf("Done. Output written to %s\n", output);
    return 0;
}
