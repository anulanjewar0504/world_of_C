#include<stdio.h>
int add(int num1, int num2);
int main(){
    int a = 40;
    int b = 50;
    int sum;

    sum = add(a,b);

    printf("%d",sum);
 return 0;   
}
int add(int num1, int num2){
    int result;
    result = num1 + num2;
    return (result);
}