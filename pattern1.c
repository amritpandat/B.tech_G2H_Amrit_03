# include<stdio.h> 
int main(){
    int i,b;
    int n=4;
    for (i=1;i<=n;i++){
        int a=1;
        int c=i-1;
        for(b=1;b<=7;b++){
           if (b+i<=4){
            printf(" ");
           }
           else  if (b<=4){
            printf("%d", a);
            a=a+1;
          }
        else if (b-i<=3)
        {
            printf("%d", c);
            c=c-1;
        }}
        printf("\n");
    }
        return 0;
    }