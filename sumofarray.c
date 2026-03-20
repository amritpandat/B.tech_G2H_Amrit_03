#include<stdio.h>
int main()
{
    int n;
   int a[n];
   printf("enter size of array :");
   scanf("%d",&n);
   int i,sum=0;
   printf("enter array ");
   for(i=0;i<n;i++)
   {
    scanf("%d", &a[i]);
    sum+=a[i];
   }
   printf("sum of array is %d",sum);
   return 0;
   }