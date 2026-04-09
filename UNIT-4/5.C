#include <stdio.h>
#include <string.h>

int main() {
    FILE *f1, *f2;
    char str[100];

    f1 = fopen("greencity.txt", "w");
    printf("Enter string: ");
    gets(str);
    fputs(str, f1);
    fclose(f1);

    f1 = fopen("greencity.txt", "r");
    fgets(str, 100, f1);
    fclose(f1);

    strrev(str);

    f2 = fopen("cleancity.txt", "w");
    fputs(str, f2);
    fclose(f2);

    return 0;
}
