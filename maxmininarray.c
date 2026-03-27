#include<stdio.h>
int main()
{   int n,i;
    printf("Enter n");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
{
    scanf("%d", & a[i]);
}
int max,min;   
for(i=0;i<n;i++)
max=a[0];
min=a[0];
for(i=0;i<n;i++)
{ if (max< a[i])
{max=a[i];
}
else if (min>a[i])
{
    min=a[i];
}
}
printf("Maximum element is %d\n", max);
printf("Minimum element is %d", min);
return 0;
}