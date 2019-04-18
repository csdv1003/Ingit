#include<stdio.h>
int sum(int arr[], int start, int len);
int main()
{
    int arr[100];
    int num, i, sumofarray;
 
 
    // Input in size and elements in array
    printf("Enter size of the array: ");
    scanf("%d", &num);
    printf("\nEnter elements in the array: ");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    sumofarray = sum(arr, 0, num);
    printf("\n\nSum of array elements: %d", sumofarray);
 
    return 0;
}
int sum(int arr[], int start, int len)
{
    // Recursion base condition
    if(start >= len)
        return 0;
 
    return (arr[start] + sum(arr, start + 1, len));
}


