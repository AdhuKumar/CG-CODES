#include<graphics.h>
#include<conio.h>

void main()
{
   int x = 250; 
   int y = 150; 
   int start_angle = 155; 
   int end_angle = 300; 
   int radius = 100; 
  
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   printf("\n Drawing the Arc on the screen");
   
   arc(x, y, start_angle, end_angle, radius);
   
   getch();
   closegraph();
   return 0;
}
