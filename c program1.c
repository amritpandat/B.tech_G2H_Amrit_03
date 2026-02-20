# include<stdio.h>
# include<math.h>
    int main ()
    {    float a,b,c,d,e,x,y;
    printf("enter marks of 5 subjects from 100 /n");
    printf("a=chemsitry ,b=physics,c=maths,d=english,e=evs /n ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
        x=a+b+c+d+e ;
    printf("sum of marks is %f",x);
        y=x/5;
    printf("percentage of marks is %f",y);
    return 0;
    } 