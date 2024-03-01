#include<stdio.h>
int interchange(int num1, int num2);
int main(){
    int a,b,change;
    int *p1,*p2;
    printf("enter the number for swiping \n -->\t");
    scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;
    interchange(*p1,*p2);
    
}
int interchange(int num1,int num2){

    int c;
    c = num1;
    num1=num2;
    num2=c;
    printf("%d%d",num1,num2); 
}