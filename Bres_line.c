#include<stdio.h>
#include<graphics.h>
 

void Bline(int,int,int,int);

int main()
{
	int graphics_driver=DETECT, graphics_mode, error;
	initgraph(&graphics_driver, &graphics_mode, "NULL");
	Bline(10, 10, 100, 100);
	Bline(10, 20, 150, 150);
	Bline(10, 30, 250, 250);
 getch();
	return 0;
}


void Bline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
 
	dx=x1-x0;
	dy=y1-y0;
 
	x=x0;
	y=y0;
 
	p=2*dy-dx;
 
	while(x<x1)
	{
		if(p>=0)
		{
			putpixel(x,y,30);
			y=y+1;
			p=p+2*dy-2*dx;
		}
		else
		{
			putpixel(x,y,30);
			p=p+2*dy;
		}
		x=x+1;
	}
	delay(1000);
}
 
