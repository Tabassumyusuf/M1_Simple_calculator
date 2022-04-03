#include<stdio.h>
void add(int x,int y)
{
    int result;
    result=x+y;
    printf("addition of %d and %d=%d\n",x,y,result);
}

void sub(int x,int y)
{
    int result;
    result=x-y;
    printf("subtraction of %d and %d=%d\n",x,y,result);
}

void multy(int x,int y)
{
    int result;
    result=x*y;
    printf("multiplication of %d and %d=%d\n",x,y,result);
}

void div(int x,int y)
{
    int result;
    result=x/y;
    printf("division of %d and %d=%d\n",x,y,result);
}
int main()
{ 
    abc:
    int ch;
    printf("Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\nEnter 5 for exit\n");
    scanf("%d",&ch);
    if(ch==1)
    {
       int a ,b;
       printf("Enter two numbers for addition:\n");
       scanf("%d%d",&a,&b);
       add(a,b);
       goto abc;
    }
    else if(ch==2)
    {
      int a ,b;
      printf("Enter two numbers for subtraction:\n");
      scanf("%d%d",&a,&b);
      sub(a,b);
      goto abc;
    }
    else if(ch==3)
    {
    int a ,b;
     printf("Enter two numbers for multiplication:\n");
     scanf("%d%d",&a,&b);
     multy(a,b);
     goto abc;
 
    }
    else if(ch==4)
    {
     int a ,b;
     printf("Enter two numbers for division:\n");
     scanf("%d%d",&a,&b);
     div(a,b);
     goto abc;
    }
    else if(ch==5)
    {
        printf("Thanks For Using Calculator\n");
    }
    else
    {
     printf("Please select right option");

    }
   
}
