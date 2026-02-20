# include <stdio.h>
   int main()
   {   int a,b,c;
    printf("enter two numbers \n");
    printf("a=first number,b=second number \n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=a;
    printf("value of a is %d ",b);
    printf("value of b is %d",a);
    return 0;
   }
   