# include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("enter two operands");
    scanf("%d %d", &a, &b);
    printf("enter operator or operation to be performed:");
    scanf(" %c",  &c);
    switch(c)
    {
        case '+':
        printf("sum of numbers is=  %d",a+b);
        break;
        case '-':
        printf("difference of numbers is = %d",a-b);
        break;
        case '*':
        printf("multiplication is = %d",a*b);
        break;
        case '/':
          if (b==0)
            printf("zero division error");
          else 
            printf("division is = %d",a/b);
        break;
        case '%':
        printf("remainder is = %d",a%b);
        break;
        default:
        printf("invalid operator");
    }
  return 0;
}