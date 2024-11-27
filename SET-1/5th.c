//5.	Write a program that takes 5 integers as input from the user 
//and finds out if the order of numbers in array is palindrome
#include<stdio.h>
int main()
{
    int digit;
    printf("Enter any five digit number : ");
    scanf("%d",&digit);
    int num = digit;
    int rev_no = 0;

    while(digit > 0)
    {
        rev_no = rev_no*10 + digit%10;
        digit = digit/10;
    }
    if(num == rev_no)
    {
        printf("number (%d) is Palindrome number ",num);
    }
    else
    {
        printf("number (%d) is not Palindrome number ",num);
    }
}