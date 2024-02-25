#include<stdio.h>
int sum1(int num1,int num2);
int sum2(int h);
int main(){
    int add,a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    add=sum1(a,b);
    printf("%d",add);
}

int sum1(int num1,int num2)
{
    int ad,f2;
    ad = num1 + num2;
    f2 = sum2(ad);
    return f2;
}

int sum2(int h)
{
    int s1= h + 2;
    return s1;
}
