#include<stdio.h>
#include<graphics.h>
#include<math.h>

void dcircle(int,int,int);

int main() 
  { 
   int graphics_driver = DETECT, graphics_mode; 

   int x1,y1;
   float r;

    initgraph (&graphics_driver, &graphics_mode, "NULL"); 
    dcircle(10,10,5);
    dcircle(50,50,40);
    dcircle(100,100,55);
    dcircle(250,250,100);   
  delay(1000);
  getch();
  closegraph();
 return 0;
}
   

void dcircle(int x1,int y1,int r)
   {
    int x,y;
    for(int t=0;t<=360;t++)
    {
      x=x1+(r*cos(t));
      y=y1+(r*sin(t));
      putpixel(x,y,40);
    }
  }
