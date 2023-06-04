//Write a program to reverse a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int number,reversenumber=0,remainder;
    printf("Enter a number: ");
    scanf("%d",&number);
    while(number!=0)
    {
        remainder=number%10;
        reversenumber=reversenumber*10+remainder;
        number=number/10;
    }
    printf("Reverse Number = %d",reversenumber);
    getch();
}
