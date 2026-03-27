#include<stdio.h>
int main()
{   int n,i,item,found=0,pos;
    printf("Enter n");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
{
    scanf("%d", & a[i]);
}
printf("Enter item to be searched");
    scanf("%d", &item);
for(i=0;i<n;i++)
{ if (item==a[i])
   { pos=i;
    printf("Item found at %d position",i+1);
    found=1;
    break;
}
}
if (found==0)
{
    printf("Search unsuccessful");
}
return 0;
}