#include <stdio.h>

void merge(int a[], int low, int mid, int high) {
    int temp[100], i=low, j=mid+1, k=low;

    while(i<=mid && j<=high) {
        if(a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while(i<=mid)
        temp[k++] = a[i++];

    while(j<=high)
        temp[k++] = a[j++];

    for(i=low; i<=high; i++)
        a[i] = temp[i];
}

void mergesort(int a[], int low, int high) {
    if(low < high) {
        int mid = (low + high)/2;
        mergesort(a, low, mid);
        mergesort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}

int main() {
    int a[100], n, i;

    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    mergesort(a, 0, n-1);

    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}
