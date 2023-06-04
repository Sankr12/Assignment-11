//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,c=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        c=c+2*a+1;
    }
    printf("%d",c);
    getch();
}

