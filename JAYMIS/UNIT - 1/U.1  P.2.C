//write a program for find total and average elements
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Total = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
