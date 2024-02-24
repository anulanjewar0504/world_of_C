/*file program*/
#include<stdio.h>
#include<conio.h>
int main()
{
 FILE *ptr;
 char x;
 ptr=fopen("s1.txt","r");
 while(!feof(ptr))
 {
	 x=fgetc(ptr);
	 putch(x);
 }
 fclose(ptr);
 return 0;
}