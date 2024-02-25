#include<stdio.h>
int factor();
int add ();
int main(){
    int a,b,f;
    printf("Enter the number");
    scanf("%d",&a);
    f = factor(a);
    b = add(a);
    for(int i=0;i<5;i++){
     printf("%d",f);
     printf("\n%d\n",b);
    }

}

int factor(int num1){
    int fa,i;
    fa = 1;
    for(i=1;i<=num1;i++){
        fa=fa*i;
    }
   return fa;

}

int add (int num1){
   int sum = num1 + 2;
   return sum;
}