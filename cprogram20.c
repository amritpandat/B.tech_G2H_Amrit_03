#include<stdio.h>
 # include<math.h>
int main()
{
    int ch;
    printf("for binary to decimal enter 1 \n");
    printf("for decimal to binary entaer 2 \n");
    scanf(" %d",&ch);
    if (ch==1)
    {
        int i=0,a,b,sum=0;
        printf("enter binary number ");
        scanf(" %d",&a);
        for (;a!=0;a/=10)
        {b=a%10;
        sum+= b * pow(2,i);
        i++;
        }
        printf("number in decimal is %d",sum);
    }
    else if (ch==2)
    { 
        int a,binary[50],j,i;
        printf("enter decimal number");
        scanf(" %d",&a);
        for(;a!=0;a/=2)
        {
            binary[i]=a%2;
            i++;
        }
        for(j=i-1;j>=0;j--)
        { 
            printf("%d",binary[j]);
           
        }

    }
    return 0;
}