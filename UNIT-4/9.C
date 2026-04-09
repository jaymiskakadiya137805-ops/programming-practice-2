#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int upper=0, lower=0, digit=0, vowel=0, special=0;

    fp = fopen("file1.txt", "r");

    while ((ch = fgetc(fp)) != EOF) {
        if (isupper(ch)) upper++;
        else if (islower(ch)) {
            lower++;
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowel++;
        }
        else if (isdigit(ch)) digit++;
        else special++;
    }

    printf("Upper: %d Lower: %d Digits: %d Vowels: %d Special: %d",
           upper, lower, digit, vowel, special);

    fclose(fp);
    return 0;
}
