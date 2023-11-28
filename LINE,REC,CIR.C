#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm," C:\\TC\\BGI ");
setcolor(RED); line(0,100,100,100);
outtextxy(30,110,"line");
setcolor(GREEN); circle(200,100,50);
outtextxy(180,155,"circle");
setcolor(BROWN);
rectangle(300,100,450,50);
outtextxy(350,110,"rectangle");
setcolor(YELLOW);
line(500,130,550,60);
line(600,130,550,60);
line(500,130,600,130);
outtextxy(520,140,"triangle");
getch();
closegraph();

}
