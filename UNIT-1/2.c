//Enter N elements and find total and average of them.

#include<stdio.h>

int main()
{
    int n,i,sum=0;
    float avg;

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
        printf(" %d",arr[i]);
    }

    // sum of array

    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }

     printf("\nThe sum of array:-%d",sum);

    avg=sum/n;


    printf("\nThe average of array:-%f",avg);

    return 0;
}
