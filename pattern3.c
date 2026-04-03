# include<stdio.h> 
int main(){
    int i,j;
    int n=4;
    for (i=1;i<=n;i++){
        int a=1;
        int b=i;
        for(j=1;j<=8;j++){
           if (j<=i){
            printf("%d",a);
            a=a+1;
           }
        else if (j>=i+1 && j<=8-i){
             printf(" ");
        }
        else if (j>=8-i+1)
    {
      printf("%d", b);
      b=b-1;
    }
}
          
        printf("\n");
    }
        return 0;
    }