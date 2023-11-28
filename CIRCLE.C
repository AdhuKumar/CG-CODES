#include<graphics.h>
#include<conio.h>

void main()
{
   int x=200;
   int y=150;
   int radius=70;

   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   printf("\n Drawing the Circle on the screen");
   circle(x,y,radius); 
   
   getch();
   closegraph();
   return 0;

}
