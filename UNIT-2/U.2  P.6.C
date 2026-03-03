//Write a function to print data of all students who joined in 2019.
#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
    int join_year;
};

// Function to print students who joined in 2019
void printJoined2019(struct student s[], int size) {
    int i, found = 0;

    printf("\nStudents who joined in 2019:\n");

    for(i = 0; i < size; i++) {
        if(s[i].join_year == 2019) {
            printf("\nRoll Number: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            printf("Joining Year: %d\n", s[i].join_year);
            found = 1;
        }
    }

    if(!found) {
        printf("No students joined in 2019.\n");
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

        printf("Joining Year: ");
        scanf("%d", &s[i].join_year);
    }

    // Call function
    printJoined2019(s, 5);

    return 0;
}
