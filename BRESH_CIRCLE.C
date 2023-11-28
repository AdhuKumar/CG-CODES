#include <stdio.h>
#include<conio.h>
#include <graphics.h>
void main()
{
int x2, y2, x, y, p, radius;
int gd = DETECT, gm;
initgraph(&gd, &gm, "c:\\turboc3\\bgi");
printf("Enter the values of x2 and y2 :");
scanf("%d%d",&x2,&y2);
printf("Enter the value of radius :");
scanf("%d",&radius);
int x = 0, y = radius;

int p = 3 - 2 * radius;
do
{

putpixel(x2+x, y2+y, RED);

putpixel(x2-x, y2+y, RED);

putpixel(x2+x, y2-y, WHITE);

putpixel(x2-x, y2-y, RED);

putpixel(x2+y, y2+x, WHITE);

putpixel(x2-y, y2+x, RED;

putpixel(x2+y, y2-x, WHITE);

putpixel(x2-y, y2-x, RED);
if (p > 0)

{

y--;

p = p + 4 * (x - y) + 10;

}
else{

p = p + 4 * x + 6;
}
x++;
}
while (y >= x);
getch();

closegraph();
}
