#include<stdio.h>
int main()
{
    int number;
    printf("Enter any number:");
    scanf("5d",&number);
    if(number%2==0)
    {
        printf("This number is Even");
    }
else
printf("This number is Odd");


    return 0;
}