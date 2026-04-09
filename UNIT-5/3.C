#include <stdio.h>

int binarySearch(int a[], int low, int high, int key) {
    if(low > high)
        return -1;

    int mid = (low + high) / 2;

    if(a[mid] == key)
        return mid;
    else if(a[mid] < key)
        return binarySearch(a, mid+1, high, key);
    else
        return binarySearch(a, low, mid-1, key);
}

int main() {
    int a[100], n, i, key, result;

    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    result = binarySearch(a, 0, n-1, key);

    if(result == -1)
        printf("Not found");
    else
        printf("Found at position %d", result+1);

    return 0;
}
