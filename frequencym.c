# include<stdio.h>
int main  ()
{
    int n,m;
    printf("enter number of rows and coloumns of matrix \n");
    scanf("%d%d", &n,&m);
    int a[n][m];
    int i,j;
    printf("enter matrix elements");
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int b,count=0;
    printf("enter number to count frequency \n");
    scanf("%d", &b);
     for (i=0;i<n;i++){
        for (j=0;j<m;j++){
           if ( b==a[i][j]){
              count+=1;
           }
        }
    }
    printf("frequency of number is %d",  count);
    return 0;
}