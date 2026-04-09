#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("file1.txt", "r");

    fseek(fp, 5, SEEK_SET);
    ch = fgetc(fp);
    printf("After fseek: %c\n", ch);

    printf("Position: %ld\n", ftell(fp));

    rewind(fp);
    printf("After rewind: %ld", ftell(fp));

    fclose(fp);
    return 0;
}
