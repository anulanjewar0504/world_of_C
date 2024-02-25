//use pointer
#include<stdio.h>
int main()
{
    int x,y,*p,*q,s;
    printf("input the value of x and y");
    scanf("%d%d",&x,&y);
    p=&x;
    q=&y;
    s=*p+*q;
    printf("sum is = %d",s);
    return 0;
}