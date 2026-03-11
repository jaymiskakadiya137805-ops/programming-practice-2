//Enter N elements and print them.

#include<stdio.h>

int main()
{
    int n,i;

    printf("Enter the value of N:-");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the %d element:-",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
