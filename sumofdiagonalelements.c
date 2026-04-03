# include<stdio.h>
int main  ()
{
    int n,m;
    printf("enter number of rows and coloumns of matrix \n");
    scanf("%d%d", &n , &m);
    int a[n][m];
      if (m==n){
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int sum=0;
     for (i=0;i<n;i++){
        for (j=0;j<m;j++){
           if ( i==j){
              sum+=a[i][j];
           }
        }
    }
     printf("sum of diagonal elements is %d", sum);
}
else {
    printf("rows and columns should be same");
}
  
    return 0;
}