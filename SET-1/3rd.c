//3.	Write a program to merge two sorted arrays to a third array.


#include<stdio.h>
int main()
{
    int size1,size2;
    printf("Enter size of 1st array : ");
    scanf("%d",&size1);
    int arr1[size1] ;
    printf("Enter size of 2nd array : ");
    scanf("%d",&size2);
    int arr2[size2];

    printf("Enter value of 1st sorted array :");
    for(int i = 0; i < size1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter value of 2nd sorted array :");
    for(int i = 0; i < size2; i++)
    {
        scanf("%d",&arr2[i]);
    }    
    int arr3[size1 + size2];
    int size3 = size1 + size2;
    int counter = 0;
    int i = 0;
    while(size1 > i)
    {
        arr3[counter] = arr1[i];
        counter++;
        i++;
    }
    i =0;
    while(size2 > i)
    {
        arr3[counter] = arr2[i];
        counter++;
        i++;
    }
    for(int i = 0; i < size3; i++)
    {
        printf("%d",arr3[i]);
    }
    
}