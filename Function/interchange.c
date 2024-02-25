#include<stdio.h>
int interchange(int num1, int num2);
int main(){
    int a = 5;
    int b = 4;
    int change;
    interchange(a,b);
    
}
int interchange(int num1,int num2){
    int c;
    c = num1;
    num1=num2;
    num2=c;
    printf("%d%d",num1,num2); 
}