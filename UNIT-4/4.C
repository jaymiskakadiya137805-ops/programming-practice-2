#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("file1.txt", "a");
    printf("Enter text to append: ");
    gets(str);

    fputs(str, fp);
    fclose(fp);
    return 0;
}
