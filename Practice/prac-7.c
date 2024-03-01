#include<stdio.h>
void print(int count);

int main(){
    print(10);
    return 0;
}

void print(int count){
    if(count==0){
        return;
    }
    printf("Hello zandu\n");
    print(count-1);
}