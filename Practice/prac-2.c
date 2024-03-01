#include<stdio.h>
int main(){
    // area of square
    float sides, redius;
    const float pi = 3.14;
    printf("Enter the length of side of square: ");
    scanf("%f",&sides);
    printf("Area is: %f",sides*sides);
    
    // area of circle
    printf("\nEnter the length of redius: ");
    scanf("%f",&redius);
    printf("Area of circle is: %f",pi*redius*redius);
    return 0;
}