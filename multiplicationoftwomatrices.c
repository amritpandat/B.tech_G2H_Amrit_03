#include<stdio.h>
int main()
{
    int n,m,l,o;
    printf("enter the rows of 1st matrix :");
    scanf("%d", &n);
    printf("enter the columns of 1st matrix :");
    scanf("%d", &m);
    printf("enter the rows of 2nd matrix :");
    scanf("%d", &l);
    printf("enter the columns of 2nd matrix :");
    scanf("%d", &o);
    int a[n][m];
    int b[l][o];
    int i,j,k;
    char choice;
    printf("enter first matrix \n");
    for (i=0;i<n;i++)
    {for(j=0;j<m;j++)
    {scanf("%d", &a[i][j]);
    }}
    printf("enter second matrix \n");
    for (i=0;i<l;i++)
    {for(j=0;j<o;j++)
    {scanf("%d", &b[i][j]);
    }}
    
      
     int c[n][o];
      for(i=0;i<n;i++)
      {
         for(j=0;j<o;j++)
         {
            c[i][j]=0;
            for(k=0;k<m;k++)
            {
               c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
         }
        }
   printf("result matrix \n");
       for (i=0;i<n;i++)
       {
         for(j=0;j<o;j++)
       {  
         printf("%d", c[i][j]);
         printf(" ");
       } 
       printf("\n");
       }
   return 0;
  }