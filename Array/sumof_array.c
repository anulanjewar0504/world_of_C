// Arraysum1 : Write a program to calculate the sum of all elements in an integer array.
# include <stdio.h>
int main(){
    int x[5] = {1,2,3,4,5};
    int s,i;
    for(int i=0;i<5;i++){
        s=s+x[i];

    }

    printf("%d",s);
}

// Array Rotation: Implement a program to rotate the elements of an integer array to the right by a given number of positions. For example, if the array is [1, 2, 3, 4, 5] and you rotate it by 2 positions, the resulting array should be [4, 5, 1, 2, 3].

// Array Sorting: Create a program that sorts an array of integers in ascending order using a simple sorting algorithm like Bubble Sort or Selection Sort.