//Write a program that compares two given dates. To store a date use
a structure that contains three members namely date, month and
year. If the dates are equal then display message “equal” otherwise
“not equal”.
#include <stdio.h>

// Structure to store date
struct Date {
    int date;
    int month;
    int year;
};

int main() {
    struct Date d1, d2;

    // Input first date
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.date, &d1.month, &d1.year);

    // Input second date
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.date, &d2.month, &d2.year);

    // Compare dates
    if (d1.date == d2.date &&
        d1.month == d2.month &&
        d1.year == d2.year) {
        printf("equal\n");
    } else {
        printf("not equal\n");
    }

    return 0;
}
