//Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int number,divisor=2;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number<0)
        {
            number=-number;
        }
    while(number>=divisor)
    {
        if(number%divisor==0)
            break;
        else
            divisor++;
    }
    if(divisor==number)
        printf("Prime Number");
    else
        printf("Not a Prime Number");
    getch();
}

