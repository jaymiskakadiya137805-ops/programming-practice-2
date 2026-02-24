//Enter your name and print it vertically
#include <stdio.h>

int main() {
    char name[100];

    // Input name
    printf("Enter your name: ");
    scanf("%s", name);

    // Print vertically
    printf("Name printed vertically:\n");
    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c\n", name[i]);
    }

    return 0;
}
