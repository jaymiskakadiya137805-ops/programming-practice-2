//Demonstrate difference between structure and union.
#include <stdio.h>
#include <string.h>

// Structure declaration
struct studentStruct {
    int roll;
    float marks;
    char grade;
};

// Union declaration
union studentUnion {
    int roll;
    float marks;
    char grade;
};

int main() {

    struct studentStruct s;
    union studentUnion u;

    printf("Size of structure: %lu bytes\n", sizeof(s));
    printf("Size of union: %lu bytes\n", sizeof(u));

    // Assign values to structure
    s.roll = 1;
    s.marks = 85.5;
    s.grade = 'A';

    printf("\nStructure Values:\n");
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    printf("Grade: %c\n", s.grade);

    // Assign values to union
    u.roll = 1;
    u.marks = 85.5;
    u.grade = 'A';

    printf("\nUnion Values:\n");
    printf("Roll: %d\n", u.roll);
    printf("Marks: %.2f\n", u.marks);
    printf("Grade: %c\n", u.grade);

    return 0;
}
