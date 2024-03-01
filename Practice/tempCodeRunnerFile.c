#include<stdio.h>
int main(){
    int n,i;
    // printf("Enter the number to print numbers upto: ");
    // scanf("%d",&n);
    // for(i=0; i<=n; i++){
    //     printf("%d \t",i);
    // }
    printf("Enter the number to generate table: ");
    scanf("%d",&n);
    for(i=1; i<=10; i++){
        printf("%d * %d =%d \n",n,i,n*i);
    }
    return 0;
}