#include <stdio.h>
int main()
{ float km,miles,a,b;
printf("Enter km,miles\n");
scanf("%f%f", &km, &miles);
a=km*0.621;
b=miles*1.6;   
printf("Distance in km is %f",b);
printf("Distance in miles is %f",a);
return 0;
}
    
