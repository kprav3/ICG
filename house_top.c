#include <graphics.h>
#include <stdio.h>
void main()
{
	int i,graphics_driver=DETECT,graphics_mode;
	initgraph(&graphics_driver,&graphics_mode,"c:\\turboc3\\bgi");

	line(100,50,500,50);
	line(100,50,100,250);
	line(500,50,500,250);
	line(100,250,500,250);
	line(250,50,250,250);
	rectangle(100,250,175,300);
	line(175,250,175,350);
	line(175,350,525,350);
	line(175,300,500,300);
	line(500,300,525,350);
	line(500,250,525,250);
	line(525,250,500,300);
	rectangle(350,100,375,125);
	rectangle(90,50,510,250);
	delay(10000);

	getch();

	closegraph();

	}