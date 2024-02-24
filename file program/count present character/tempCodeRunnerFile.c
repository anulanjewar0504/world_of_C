/*file program*/
#include<stdio.h>
int main()
{
 FILE *ptr; 
 int c;
 char x;
 ptr=fopen("s1.txt","r");
 c=1;
 while(!feof(ptr))
 {
	 x=fgetc(ptr);
	 c++;
 }
 printf("total char = %d",c);
 fclose(ptr);
 return 0;
}