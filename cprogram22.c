#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of arrays:");
    scanf("%d", &n);
    int a[n];
    int b[n];
    int c[n];
    printf("enter first array array \n");
    int i;
    for (i=0;i<n;i++)
    {
      scanf("%d", &a[i]);
    }
    printf("enter second array \n");
    for (i=0;i<n;i++)
    {
      scanf("%d", &b[i]);
    }
    for (i=0;i<n;i++)
    {
      c[i]=a[i]+b[i];
    }
    for (i=0;i<n;i++)
    {
      printf("%d",c[i]);
      printf(" ");
    }
    return 0;
}