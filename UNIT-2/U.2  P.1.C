//Write a program to input data and display data.
#include <stdio.h>

int main() {
    int age;
    float salary;
    char name[50];

    // Input data
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your salary: ");
    scanf("%f", &salary);

    // Display data
    printf("\n--- Displaying Data ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);

    return 0;
}
