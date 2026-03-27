#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d", &n);
    int a[n];
    printf("enter array \n");
    int i,max,min;
    for (i=0;i<n;i++)
    {
      scanf("%d", &a[i]);
    }
    max=a[0];
    min=a[0];
    for (i=0;i<n;i++)
    {   
     if ( max<a[i])
      {max = a[i];
      }
      else if (min>a[i])
      {
        min=a[i];
      }
    }
    printf("maximun elements is %d \n",max);
    printf("minimum elements is %d",min);
    return 0;
  }