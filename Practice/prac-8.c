# include <stdio.h>
int main(){
    int age =15;
    int *ptr = &age;
    *ptr=*ptr +1;
    int rec = *ptr;
    printf("%d\n",rec);
    printf("%d",age);
    return 0;
}