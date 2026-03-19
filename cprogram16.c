# include<stdio.h>
# include<math.h>
   int main()
{  int n,i,a=1;
    printf("enter number to check: /n");
    scanf("%d",&n);
    for ( i=2 ; i<n ; i++)
    {  if (n%i==0)
         { 
            a=2;
          break;
         }
    }
 if (a == 1)
       {printf("number is  prime number");
       }
else
       {printf("number is not a prime number");
       }
    return 0;
}
 