#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int gd = DETECT ,gm, i;
int x, y,dx,dy,steps;
int x0, x1, y0, y1;
initgraph(&gd, &gm, "C:\\TC\\BGI");
setcolor(WHITE);
printf("Enter coordinates for 1st point of line:");
scanf("%d%d",&x0,&y0);
printf("Enter coordinates for 2nd point of line:");
scanf("%d%d",&x1,&y1);
dx = (x1 - x0);
dy = (y1 - y0);
if(dx>=dy)
{
steps = dx;
}
else
{
steps = dy;

}
dx = dx/steps;
dy = dy/steps;
x = x0;
y = y0;
i = 1;
while(i<= steps)
{
putpixel(x, y, RED);
x += dx;
y += dy;
i=i+1;
}
getch();
closegraph();
}
