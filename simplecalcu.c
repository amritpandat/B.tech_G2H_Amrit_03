# include <stdio.h>
# include<math.h>
  int main()
{ float a,b,d;
  char f;
    printf("simple calculator \n");
    printf("enter two numbers \n");
    scanf("%f%f",&a,&b);
    printf("enter operation to be perform \n");
    scanf(" %c",&f);
    if (f=='+')
      {  d=a+b;
        printf("sum is %f",d);
    }
    else if (f=='-')
      {  d=a-b;
        printf("difference is %f",d);
    }
    else if ( f=='*')
    {  d=a*b;
       printf("mutliplication is %f",d);
    }
    else if (f=='/')
    {  d=a/b;
       printf("division is %f",d);
    }
    else 
    {  printf("invalid input");
    }
    return 0;
}