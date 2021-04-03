// c program to print hello world
#include <stdio.h>
int main() {
    printf("Hello world");
    return 0;
}

//C Program to Print an Integer (Entered by the User)
#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a number\n ");
    scanf("%d",&n);
    i=n;
    printf("the number is:%d",i);
    return 0;
}

//C Program to Add Two Integers
#include <stdio.h>
int main()
{
    int a,b,sum=0;
    printf("enter a two  number\n ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("the addition of two number is:%d",sum);
    return 0;
}

//C Program to Multiply Two Floating-Point Numbers
#include <stdio.h>
float main()
{
    float a,b,multi;
    printf("enter a two  number\n ");
    scanf("%f%f",&a,&b);
    multi=a*b;
    printf("the Multiply of two number is:%f",multi);
    return 0;
}

//C Program to Find ASCII Value of a Character
#include <stdio.h>
int main()
{
    char c;
    printf("enter a character\n ");
    scanf("%c",&c);
    printf("the ASCII value of character  %c is %d",c,c);
    return 0;
}

//C Program to Swap Two Numbers
#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter a two number \n ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("the swap of two number a is %d and b is %d",a,b);
    return 0;
}

//C Program to Check Whether a Number is Even or Odd
#include <stdio.h>
int main()
{
    int n;
    printf("enter a  number \n ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    return 0;
}
