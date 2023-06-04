//Write a program to calculate factorial of a number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,c=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        c=c*a;
    }
    printf("%d",c);
    getch();
}

