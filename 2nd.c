//2.	Write a program that takes 5 integers as input from the user and print Max of all the numbers.


#include<stdio.h>
int main()
{
    int digit;
    int remainder,largest = 0;
    printf("Enter any five digit of number :");
    scanf("%d",&digit);

    while(digit > 0)
    {
        remainder = digit % 10;
        if(remainder > largest)
        {
            largest = remainder;
        }
        digit = digit / 10;
    }
    printf("The largest number of five digit is  : %d ",largest);
}