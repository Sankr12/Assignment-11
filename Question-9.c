//Write a program to calculate LCM of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int one,two,divisor=2,num=1,a,b;
    printf("Enter First number: ");
    scanf("%d",&one);
    printf("Enter Second number: ");
    scanf("%d",&two);
    a=one;
    b=two;
    while(one>1 || two>1)
    {
        if(one%divisor==0 && two%divisor==0)
          {
            num=num*divisor;
            one=one/divisor;
            two=two/divisor;
          }
          else if(one%divisor==0 && two%divisor!=0)
         {
            num=num*divisor;
            one=one/divisor;
         }
        else if(one%divisor!=0 && two%divisor==0)
          {
            num=num*divisor;
            two=two/divisor;
          }
          else
            divisor++;
    }
    printf("LCM of %d and %d = %d",a,b,num);
    getch();
}
