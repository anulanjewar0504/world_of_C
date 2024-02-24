#include<stdio.h> 
#include<ctype.h> 
#include<stdlib.h> 
#define SIZE 40 
int pop(); 
void push(int); 
char postfix[SIZE]; 
int stack[SIZE],top=-1; 
int main() 
{ 
    int i,a,b,result,pEval; 
    char ch; 
    printf("\nEnter a postfix exp:"); 
    scanf("%s",postfix); 
    for(i=0;postfix[i]!='\0';i++)
    {    ch=postfix[i]; 
         if(isdigit(ch)) 
            push(ch-'0'); 
         else if(ch=='+'||ch=='-'||ch=='*'||ch=='/') 
         {    a=pop(); 
              b=pop(); 
              switch(ch) 
              {
                case'+':result=b+a; 
                        break; 
                case'-':result=b-a; 
                        break; 
                case'*':result=b*a; 
                        break; 
                case'/':result=b/a;
                        break; 
              } 
              push(result); 
         }
    } 
              pEval=pop(); 
              printf("\nThe postfix evaluation is:%d\n",pEval); 
              return 0; 
} 
        void push(int n) 
        { 
            top++; 
            stack[top]=n; 
        } 
        int pop() 
        { 
            int n; 
            n=stack[top]; 
            top=top-1; 
            return n; 
        }