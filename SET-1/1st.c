//1.	Write a program to count total number of negative numbers in an array.


#include<stdio.h>
int main()
{
    int arr[5] = {-2,-3,5,9,0};
    int count = 0;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i] < 0)
        {
            count++;
        }
    }
    printf("The number of negetive number = %d",count);
}