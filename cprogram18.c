# include <stdio.h>
# include <math.h>
int main()
{
   int n,a=0,b;
   printf("enter the number to reverse : \n");
   scanf("%d",&n);
   for (;n!=0 ; n/=10)
   {
     b=n%10;
     a=a*10+b;
}
printf("reverse of number is = %d",a);
return 0;
}
