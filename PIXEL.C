#include<graphics.h>
#include<conio.h>

void main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   printf("\n Plotting the pixels on the screen ");
// putpixel(x, y, color);
   putpixel(85, 35, GREEN); 
   putpixel(30, 40, RED); 
   putpixel(115, 50, YELLOW); 
   putpixel(135, 50, CYAN); 
   putpixel(45, 60, BLUE); 
   putpixel(20, 100, WHITE); 
   putpixel(200, 100, LIGHTBLUE); 
   putpixel(150, 100, LIGHTGREEN); 
   putpixel(200, 50, YELLOW); 
   putpixel(120, 70, RED); 

   getch();
   closegraph();
   return 0;
}
