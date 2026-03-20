# include<stdio.h>
int main()
{
    int n;
   int a[n];
   printf("enter size of array :");
   scanf(" %d", &n);
   int c=0,b=0;
   int i;
   printf("enter array:");
   for(i=0;i<n;i++)
   {
    scanf("%d", &a[i]);
   }
   for(i=0;i<n;i++)
   {
       if ( a[i] %2 == 0 )
       {
        c+=1;
       }
       else 
       {
        b+=1;
       }
   }
   printf("number of even numbers is %d",c);
   printf("number of odd numbers is %d",b);
   return 0;
}