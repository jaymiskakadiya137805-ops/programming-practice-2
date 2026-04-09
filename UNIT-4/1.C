#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("file1.txt", "w");
    printf("Enter text: ");
    gets(str);
    fputs(str, fp);
    fclose(fp);

    fp = fopen("file1.txt", "r");
    printf("File content:\n");
    while (fgets(str, 100, fp)) {
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}
