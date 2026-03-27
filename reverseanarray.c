#include<stdio.h>
int main()
{   int n,i;
    printf("Enter n");
    scanf("%d", &n);
    int a[n];
    int rev[n];
    for(i=0;i<n;i++)
{
    scanf("%d", & a[i]);
}
printf("Reverse array:");
for(i=0;i<n;i++)
{
    rev[i]= a[n-i-1];
printf("%d", rev[i]);
}
return 0;
}