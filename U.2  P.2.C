//Modify above program for 5 students record.
#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct student s[5];   // Array for 5 students
    int i;

    // Input details for 5 students
    for(i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display details
    printf("\n--- Student Records ---\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
