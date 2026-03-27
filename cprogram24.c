#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d", &n);
    int a[n];
    printf("enter array \n");
    int i,c,flag=0,pos;
    for (i=0;i<n;i++)
    {
      scanf("%d", &a[i]);
    }
    printf("enter element to be searched ; ");
    scanf("%d", &c );
    for (i=0;i<n;i++)
    {
      if(c==a[i])
      {
        pos=i+1;
        flag=1;
        break;
      }
    }
    if (flag==0)
    {
      printf("element not founded");
    }
    else 
     {
      printf("element present on %d position ",pos);
     }    
    return 0;
  }