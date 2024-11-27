// 8.	Write a program to count frequency of each number in an array.


#include<stdio.h>

int count_frequency(int number,int arr[],int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == number)
        {
            count++;
        }
    }
    return count;
}


int main()
{
    int size;
    printf("Enter size of array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array values : \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int number;
    printf("enter number to check frequency :");
    scanf("%d",&number);

    int result = count_frequency(number,arr,size);

    printf("The frequency of given number is = %d",result);
}