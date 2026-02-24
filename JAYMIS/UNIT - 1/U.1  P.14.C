//Enter a string and print it in reverse order with using string
function and without string function.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // --- Using string function ---
    printf("Reverse using string function:\n");
    length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    // --- Without using string function ---
    printf("Reverse without using string function:\n");
    int count = 0;
    while (str[count] != '\0') {  // count characters manually
        count++;
    }
    for (int i = count - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
