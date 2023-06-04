//Write a program to count digits in a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int number,count=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number<0)
        {
            number=-number;
        }
    do{
        count++;
        number=number/10;
    }while(number!=0);
    printf("%d",count);
    getch();
}

