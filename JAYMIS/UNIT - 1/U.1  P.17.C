//Check the string is palindrome or not.
#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for tolower()

int main() {
    char str[100];
    int length, flag = 1;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    // --- Using string function ---
    length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("Using string function: The string is a palindrome.\n");
    } else {
        printf("Using string function: The string is NOT a palindrome.\n");
    }

    // --- Without using string function ---
    int count = 0, same = 1;
    while (str[count] != '\0') {
        count++;
    }

    for (int i = 0; i < count / 2; i++) {
        if (str[i] != str[count - i - 1]) {
            same = 0;
            break;
        }
    }

    if (same) {
        printf("Without string function: The string is a palindrome.\n");
    } else {
        printf("Without string function: The string is NOT a palindrome.\n");
    }

    return 0;
}
