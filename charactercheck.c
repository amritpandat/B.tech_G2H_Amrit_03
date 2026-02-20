#include<stdio.h>
#include<math.h>
int main()
{ char a;
    printf("Enter digit or character to be checked");
    scanf("%c", &a);
    if ( a>=0 && a<=9)
    { printf("Character is digit");
    }
    else if ((a>='a' && a<='z')  || (a>='A'&& a<='Z'))
    {printf("Character is alphabet");
    }
    else 
    {printf("Character is special character");
    }
return 0;
}
