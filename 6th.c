//6.	Write a program to search a number (taken as input from user) in an array 
//     then print the index of the first occurrence of the input number in the array
//     If the input number is not present in the array then print -1

#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter values :");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int search;
    printf("Enter search number : ");
    scanf("%d",&search);
    int k = -1;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == search)
        {
            printf("number found at index %d ",i);
            k++;
        } 
    }
    if(k == -1)
    {
        printf("-1");
    }

}