#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h> 
#define size 10
void push(int); 
void pop (); 
void display(); 
int stack[size],top=-1; 
void main() 
{ 
    int item,ch; 
    while(1) 
    { 
        printf("\n\n***Manu***\n"); 
        printf("1.push\n2.pop\n3.display\n4.exit");
        printf("\nEnter your choice:"); 
        scanf("%d",&ch); 
        
        switch(ch)
{ 
    case 1:printf("Enter item to be inserted:"); 
    scanf("%d", &item); 
    push(item); 
        break; 
    case 2:pop(); 
         break; 
    case 3: display(); 
         break; 
    case 4: exit(0); 
    
default : printf("\nwrong choice!! Try again!!"); 
}
}
}
void push(int item) 
{ 
    if(top==size-1) 
    printf("\n stack overflow"); 
    else 
    { 
        top++; 
        stack[top]=item; 
    }
} 
void pop(int item) 
{ 
    if(top==-1) 
        printf("\n stack Empty Underflow"); 
    else 
     {  
     item=stack[top];
     printf("\nDeleted:%d",stack[top]);
    top--; 
}
}
void display() 
{
    int i;
    if(top==-1) 
      printf("\nstack is Empty"); 
    else 
    { 
        printf("\n stack element are:\n"); 
        
    for(i=top;i>=0;i--)
    printf("%d\n",stack[i]); 
    }
}