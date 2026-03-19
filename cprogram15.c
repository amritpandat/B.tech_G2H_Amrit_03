# include <stdio.h>
  int main()
{ 
  int n , i , a , b=1 , c=0;
    printf("enter number;");
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++)
    { 
      printf("%d",c);
      a=c+b;
      c=b;
      b=a;
    }
    return 0;
}
    
