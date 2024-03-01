# include <stdio.h>
int main(){
    int *ptr1,*ptr2;
    int a,b,add;
    printf("enter two numbers for addition");
    scanf("%d%d",&a,&b);

    ptr1=&a;
    ptr2=&b;

    add=*ptr1+*ptr2;
    printf("the answer is %d",add);
}
