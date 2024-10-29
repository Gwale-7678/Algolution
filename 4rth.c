//4.	Write a program that takes 7 integers as input from the user 
//then Reverse the order of numbers in the array, then print the numbers.


#include<stdio.h>
int main()
{
    int arr[7];
    printf("Enter 7 digits :");
    for(int i = 0; i < 7; i++)
    {
        scanf("%d",&arr[i]);
    }
    int low = 0,high = 6;
    while(high >= low)
    {
        int mid = arr[high];
        arr[high] = arr[low];
        arr[low] = mid;
        low++; high--;
    }
    for(int i = 0; i < 7; i++)
    {
        printf("%d",arr[i]);
    }
}