//7.	Write a program to print all unique numbers in an array.


#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of array :");
    scanf("%d",&size);
    int arr[size];
    int i;
    for(i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i = 0; i < size; i++)
    {
        int k =1;
        for(int j = i- 1; j >= 0; j--)
        {
            if(arr[i] == arr[j])
            {
                k = 0;
                break;
            }
        } 

        if(k){
            printf("%d",arr[i]);
        }
    }

}