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
    int add=0;
     for (i=0;i<n;i++){
        for (j=0;j<m;j++){
          add+=a[i][j];
        }
    }
    printf(" sum  of rows and coloumn is %d", add);
    return 0;
}