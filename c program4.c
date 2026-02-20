# include<stdio.h>
# include<math.h>
   int main()
   {  float C,F;
   printf(" enter temperature in centigrade" );
   printf("C=temperature in celcius' F=temperature in fahrenheit ");
   scanf("%f",&C);
      F=((C*9)/5)+32;
   printf(" temperature in fahrenheit is %f",F); 
   return 0;
   }