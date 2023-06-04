//Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,c=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        c=c+a*a;
    }
    printf("%d",c);
    getch();
}

