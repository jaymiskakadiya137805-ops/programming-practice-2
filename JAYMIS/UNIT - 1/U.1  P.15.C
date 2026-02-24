//Enter a string and find out how many spaces and vowels in
the string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int vowels = 0, spaces = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Loop through each character
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check for vowels (both uppercase and lowercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }

        // Check for spaces
        if (ch == ' ') {
            spaces++;
        }
    }

    // Disp
