#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d", &n);
    int a[n];
    printf("enter array \n");
    int i,sum=0;
    for (i=0;i<n;i++)
    {
      scanf("%d", &a[i]);
      sum+=a[i];
    }
    printf("sum of elements of array is %d",sum);
    return 0;
  }
