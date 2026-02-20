#include<stdio.h>
#include<math.h>
int main()
{ int  a,b,c=1;
    printf("enter number \n");
    scanf("%d", &a);
    for (b=1;b<=a;b++)
    { c=c*b;
    }
        printf("desired sum is %d",c);
    return 0;
}