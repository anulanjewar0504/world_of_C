//make a calculator
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the value of 'a' and 'b'");
    scanf("%d%d",&a,&b);
    printf("select 1 for addition & 2 for substraction");
    scanf("%d",&c);
    if(c==1)
    {
      d=a+b;
      printf("the add is:-%d",d);
    }     
    else if(c==2)
    {
      e=a-b;
      printf("the substraction is:-%d",e);
    }
    else
    {
        printf("the input is not valid");
    }
}
