# include<stdio.h>
# include<math.h>
int main()
{
  float a,b,c,d,e,f,g,h;
  printf("enter the marks \n");
  scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
  f=(a+b+c+d+e)/5;
  if (f>=90 && f<=100)
  {   printf("grade is a");
  }
  else if ( f>=80 && f<=90)
  {   printf("grade is B");
  }
  else if ( f>=60 && f<=80 )
  {   printf("grade is C ");
  }
  else if (f<=60)
  {   printf("grade is D");
  }
  else
  {   printf("fail");
  }
  return 0;
} 

