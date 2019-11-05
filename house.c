#include <graphics.h>
#include <stdio.h>
void main()
{
	int i,graphics_driver=DETECT,graphics_mode;
	initgraph(&graphics_driver,&graphics_mode,"c:\\turboc3\\bgi");

	line(100,200,275,70);
	line(100,195,275,65);
	line(275,70,500,200);
	line(275,65,500,195);
	line(500,195,500,200);
	line(100,195,100,200);
	line(110,195,110,350);
	line(490,195,490,300);
	line(110,350,200,350);
	line(275,70,275,300);
	line(275,300,505,300);
	//line(275,320,200,320);
	line(200,320,200,380);
	line(200,380,550,380);
	line(505,300,550,380);

	line(275,300,200,300);
	line(200,300,200,350);	
	
	line(535,380,535,460);
	line(200,380,200,460);
	line(200,460,535,460);
	line(110,350,80,365);
	line(80,365,540,365);
	line(80,365,80,460);
	line(80,460,200,460);
	rectangle(250,180,225,230);
	rectangle(250,240,225,290);
	rectangle(220,180,195,230);
	rectangle(220,240,195,290);
	rectangle(295,205,320,255);
	rectangle(325,205,385,255);
	rectangle(390,205,415,255);
	rectangle(130,390,160,460);
	line(370,50,370,125);
	line(370,50,390,50);
	line(390,50,390,135);
	delay(10000);

	getch();

	closegraph();

	}