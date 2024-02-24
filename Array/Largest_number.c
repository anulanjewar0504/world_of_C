// Largest Element: Create a program that finds the largest element in an array of integers.

#include<stdio.h>
int main()
{
    int arr[] = {11,55,22,44,99,66,33,77};
    int length = sizeof(arr[0]);
    int max = arr[0];
    int i;

    for (i=0; i<=length; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
             printf("the largest number is %d\n",max);
   
    return 0;
}
