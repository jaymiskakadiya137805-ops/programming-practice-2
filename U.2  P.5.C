//Write a function to print names of students whose grade is greater
than 5.0.
#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

// Function to print students with marks > 5.0
void printAboveFive(struct student s[], int size) {
    int i;
    printf("\nStudents scoring more than 5.0:\n");

    for(i = 0; i < size; i++) {
        if(s[i].marks > 5.0) {
            printf("%s\n", s[i].name);
        }
    }
}

int main() {
    struct student s[5];
    int i;

    // Input details
    for(i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Call function
    printAboveFive(s, 5);

    return 0;
}
