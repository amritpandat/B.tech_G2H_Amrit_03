 #include<stdio.h>
 # include<math.h>
int main()
{
    int i;
    printf("Palindrome numbers are:");
    for (i=1;i<=100;i++)
    {
        int num=i;
        int count=0,sum=0,b;
        for(;num!=0;num/=10)
        { 
           count+=1;
        } 
        num=i;
        for(;num!=0;num/=10)
        { 
            b=num%10;
            sum=sum + pow(b,count);
        }
        if (sum==i)
        printf("%d",i);
    }
    return 0;
}