# include<stdio.h>
# include<math.h>
   int main()
   {  float p,r,t,n,a,b,s,c;
   printf(" enter principle , rate of interest ,time ,number  of time interest is compounded" );
   printf("p=principle,r=rate of interest,t=time,n= number of time intrest is compounded ");
   scanf("%f%f%f%f",&p,&r,&t,&n);
      s=(p*r*t)/100;
   printf("simple interest is %f",s);
      a=(1+r/n);
      b=n*t;
      c=p*pow(a,b);
   printf("compound intrest is %f",c); 
   return 0;
   }