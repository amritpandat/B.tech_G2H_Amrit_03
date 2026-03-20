# include<stdio.h>
int main()
{
    int n;
   int a[n];
   int b[n];
   printf("enter size of array :");
   scanf("%d", &n);    
   int i;
   printf("enter array");
   for(i=0;i<n;i++)
   {
    scanf("%d", &a[i]);
   }

   for(i=0;i<n;i++)
   {
    b[i]=a[i];
   }
   for(i=0;i<n;i++)
   {
    printf("%d", b[i]);
   }
   return 0;
}