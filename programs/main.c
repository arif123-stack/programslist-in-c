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
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,temp,rem,i,c=1,p=1;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    temp=sum;
    sum=0;
    while(temp!=0)
    {
        rem=temp%10;
        for(i=1;i<=c;i++)
        {
            p=p*rem;
        }
        sum=sum+p;
        temp=temp/10;
        c++;
        p=1;
    }
    if(sum==n)
        {
            printf("the number is disarium %d",sum);
        }
     else{
        printf("the number is not disarium %d",sum);
     }
}
//------------------------------------------------------------------
//Program to Check Happy number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,temp,rem,sum=0;
    printf("Enter the number :");
    scanf("%d",&num);
    temp=num;
    while(sum!=1 && sum!=4)
    {
        sum=0;
        while(temp!=0)
        {
          rem=temp%10;
          sum=sum+rem*rem;
          temp=temp/10;
        }
        temp=sum;
    }
    if(sum==1)
    {
        printf("the number is happy number %d",sum);
    }
    else{
        printf("the number is not  happy number %d",sum);
    }
}

//------------------------------------------------------------------------
//Program to determine whether a given number is a Harshad number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rem,temp,sum=0;
    printf("Enter any number");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
       rem=temp%10;
       sum=sum+rem;
       temp=temp/10;
    }
    if(num%sum==0)
    {
        printf("%d the number is Harshad number or Niven Number",num);
    }
    else
    {
       printf("%d the number is Harshad number or Niven Number",num);
    }
}
//------------------------------------------------------------------
//Program to print all Disarium numbers between 1 to 100
#include<stdio.h>
#include<conio.h>
int length(int n){
    int length=0;
    while(n!=0){
        length+=1;
        n/=10;
    }
    return length;
}
int sum(int n){
    int sum = 0, rem = 0;
    int len = length(n);

    while(n > 0){
        rem = n%10;
        sum = sum + pow(rem,len);
        n = n/10;
        len--;
    }
    return sum;
}
int main(){
    int result=0;
    printf("Disarium number betweem 1 and 100");
    for(int i=1;i<=100;i++){
        result=sum(i);
        if(result==i)
            printf("%d\n",i);
    }
    return 0;
}
//----------------------------------------------------------------
//program
#include <stdio.h>
 int isHappyNumber(int num){
    int rem = 0, sum = 0;
     while(num > 0){
        rem = num%10;
        sum = sum + (rem*rem);
        num = num/10;
    }
    return sum;
}
int main()
{

    printf("List of happy numbers between 1 and 100: \n");
    for(int i = 1; i <= 100; i++){
        int result = i;
        while(result != 1 && result != 4){
            result = isHappyNumber(result);
        }
          if(result == 1)
            printf("%d ", i);
    }
}
//----------------------------------------------------------------------
//Program to print all Pronic numbers between 1 and 100
#include<stdio.h>
#include <stdbool.h>
bool pronicnumber(int n){
    bool flag=false;
    for(int j=1;j<=n;j++)
    {
        if(j*(j+1)==n)
        {
            flag=true;
            break;
        }
    }
    return flag;
}
int main(){
    printf("Pronic numbers between 1 and 100: \n");
    for(int i=1;i<=100;i++)
    {
        if(pronicnumber(i))
        {
            print("%d",i);
        }
    }
    return 0;
}
//-----------------------------------------------------------------


