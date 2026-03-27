#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d", &n);
    int a[n];
    printf("enter array \n");
    int i,j,b;
    for (i=0;i<n;i++)
    {
      scanf("%d", &a[i]);
    }
    for(i=1;i<n;i++)
    {
      for(j=0;j<n-i;j++)
      {
        if (a[j]>a[j+1])
        {
        b=a[j];
        a[j]=a[j+1];
        a[j+1]=b;
        }
      }
    }
    printf("sorted array is \n");
    for(i=0;i<n;i++)
    {
      printf( "%d ",a[i]);
    }
    return 0;
  }