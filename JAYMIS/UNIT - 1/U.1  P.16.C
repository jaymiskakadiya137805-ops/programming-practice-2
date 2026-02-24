//Compare two strings and find out they are same or not
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // --- Using string function ---
    if (strcmp(str1, str2) == 0) {
        printf("Using strcmp: Strings are the same.\n");
    } else {
        printf("Using strcmp: Strings are NOT the same.\n");
    }

    // --- Without using string function ---
    int i = 0, same = 1;  // assume they are same initially
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            same = 0;  // mismatch fou
