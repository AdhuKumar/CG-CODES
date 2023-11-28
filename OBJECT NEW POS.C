#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm "C:\\TC\\BGI");
 int x, y, x1, y1, t;
 x2=x+t*x;
 y2=y+t*y;
 printf("Enter the values: ");
 scanf("%d%d%d%d", &x, &y, &x2, &y2);
 printf("Enter the value of t:");
 scanf("%d", &t);
 printf("Rectangle before translation: ");
 rectangle(x, y, x2, y2);
 printf("Rectangle after translation: ");
 rectangle(x1+t*x, y1+t*x, x2+t*x, y2+t*x);
 getch();
 closegraph();
 }


