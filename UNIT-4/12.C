#include <stdio.h>

int main() {
    FILE *f1, *f2;
    int num, rev=0, rem;

    f1 = fopen("num.txt", "w");
    scanf("%d", &num);
    fprintf(f1, "%d", num);
    fclose(f1);

    f1 = fopen("num.txt", "r");
    fscanf(f1, "%d", &num);
    fclose(f1);

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    f2 = fopen("rev.txt", "w");
    fprintf(f2, "%d", rev);
    fclose(f2);

    return 0;
}
