//Enter a string and find out length of string with using string
function and without string function
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length_without = 0, length_with;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character (if present)
    str[strcspn(str, "\n")] = '\0';

    // Using string function
    length_with = strlen(str);

    // Without using string function
    for (int i = 0; str[i] != '\0'; i++) {
        length_without++;
    }

    // Output results
    printf("Length using strlen() function: %d\n", length_with);
    printf("Length without using string function: %d\n", length_without);
