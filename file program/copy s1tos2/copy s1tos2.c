/*copy file s1 o s2*/
# include <stdio.h>
int main()
{
 FILE *p,*q;
 char x;
 p=fopen("s1.txt","r");
 q=fopen("s2.txt","w");
 while(!feof(p))
 {
	 x=fgetc(p);
	 fputc(x,q);
 }
 printf("\n FILE IS COPIED");
 fclose(p);
 fclose(q);
 return 0;
}