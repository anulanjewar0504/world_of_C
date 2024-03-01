#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if(0<=marks && marks<30){
        printf("The gread is: C");
    }
    else if (30<=marks && marks<70)
    {
        printf("The gread is: B");
    }
    else if(70<= marks && marks<90){
        printf("The gread is: B");
    }
    else if(90<= marks && marks<= 100){
        printf("The gread is: A+");
    }
    else{
        printf("Enter  a valid number between 0 and 100.");
    }

return 0;    
}