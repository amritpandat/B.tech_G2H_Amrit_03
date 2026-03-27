#include<stdio.h>
int main()
{
    int n,i,sum=0,avg;
    int a[n];
    printf("Enter n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
{   scanf("%d", &a[i]);
}
    printf("Sum of array");
    for(i=0;i<n;i++)
    {sum=sum+a[i];
    
    }
    printf("%d", sum);
    printf("Avg of array");
     avg=sum/n;
    printf("%d", avg);
return 0;
}