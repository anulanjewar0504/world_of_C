#include<stdio.h>
void createTable(int n);

int main(){
    int n;
    printf("Enter the number to generate table: ");
    scanf("%d", &n);
    createTable(n);
    return 0;
}
void createTable(int n){
    int i;
    for(i=1; i<=10; i++){
        printf("%d * %d = %d \n",n,i,n*i);
    }
}
