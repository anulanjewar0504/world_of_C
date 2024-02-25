# include <graphics.h>
# include <conio.h>
void main()
{
	int gd,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	rectangle(100,100,300,300);
	circle(200,200,50);
	line(200,50,300,100);
	getch();
	closegraph();
}