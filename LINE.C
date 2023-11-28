#include<graphics.h>
#include<conio.h>

void main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   printf("\n Drawing the Line on the screen ");
// line(x1, y1, x2, y2);
   line(150, 150, 450, 150);
   line(200, 250, 200, 450);
   getch();
   closegraph();
   return 0;

}
