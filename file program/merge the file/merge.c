/*merge two file and create new file*/
# include<stdio.h>
void main()
{
 FILE *p,*q,*r;
 char x;
 p=fopen("s1.txt","r");
 q=fopen("s2.txt","r");
 r=fopen("s3.txt","w");
 while(!feof(p))
 {
	 x=fgetc(p);
	 fputc(x,r);
 }
 while(!feof(q))
 {
	 x=fgetc(q);
	 fputc(x,r);
 }
 printf("\n FILE IS MERGE");
 fclose(p);
 fclose(q);
 fclose(r);
}