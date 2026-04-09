#include <stdio.h>

struct emp {
    int code;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct emp e, max;

    fp = fopen("emp.txt", "w");

    for (int i=0; i<3; i++) {
        scanf("%d %s %f", &e.code, e.name, &e.salary);
        fwrite(&e, sizeof(e), 1, fp);
    }
    fclose(fp);

    fp = fopen("emp.txt", "r");

    fread(&max, sizeof(max), 1, fp);
    while (fread(&e, sizeof(e), 1, fp)) {
        if (e.salary > max.salary)
            max = e;
    }

    printf("Highest Salary: %s %.2f", max.name, max.salary);
    fclose(fp);
    return 0;
}
