# include<stdio.h>
# include<math.h>
 int main()
{ int a,b,c=0,d=0;
    printf("enter number");
    scanf("%d",&a);
    for (b=1;b<=a;b++)
    if (b%2==0)
    {   c=c+b;
    }
    else 
    {  d=d+b;
    }
     printf("sum of even numbers is %d",c);
    printf("sum of odd number is %d",d);
    return 0;
}
