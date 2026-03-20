# include<stdio.h>
int main()
{
    int n;
   int a[n];
   int b[n];
   printf("enter size of array :");
   scanf("%d",&n);
   int i;
   printf("enter array ");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   for (i=0;i<n;i++)
   {
      b[i]=a[n-i-1];
   }
   for(i=0;i<n;i++)
   {
    printf("%d",a[i]);
   }
   return 0;
}