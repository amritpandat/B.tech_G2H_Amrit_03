# include<stdio.h>
 # include<math.h>
   int main()
{   int a;
    printf("enter the year you want to check \n ");
    scanf("%d",&a);
    if ((a%400==0) || a%4==0 && a%100!=0)
    {   printf("given year is a leap year");
    }
    else
    {   printf("given year is not a leap year");
    }
    return 0;
}