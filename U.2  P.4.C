//Sort above data by score in descending order.
#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct student s[5], temp;
    int i, j;

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

    // Sorting by marks (Descending order)
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(s[i].marks < s[j].marks) {   // Change condition for descending
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // Display sorted records
    printf("\n--- Student Records Sorted by Marks (Descending) ---\n");
    for(i = 0; i < 5; i++) {
        printf("\nRank %d\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
