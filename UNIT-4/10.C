#include <stdio.h>

int main() {
    FILE *fp, *temp;
    char ch;

    fp = fopen("file1.txt", "r");
    temp = fopen("temp.txt", "w");

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == 'a')
            ch = 'x';
        fputc(ch, temp);
    }

    fclose(fp);
    fclose(temp);
    return 0;
}
