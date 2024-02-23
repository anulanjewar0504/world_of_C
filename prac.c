#include<stdio.h>
int main(){
	
	int number[5]={1,2,3,4,5};
	int *p = number;
	int i,ans;
	for(i = 0; i<5; i++){
	ans = *(p+2);
	printf("%d\n",ans);
	p++;
	}
	
return 0;
}