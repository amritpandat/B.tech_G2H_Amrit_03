# include <stdio.h>
# include <math.h>
int main()
{
   int n,b=0,a;
   printf("enter the number to find the sum of its digits: \n");
   scanf("%d",&n);
   for (;n!=0 ; n/=10)
   {
     a=n%10;
     b=b+a;
}
   printf("sum of digits is %d",b);
   return 0;
}