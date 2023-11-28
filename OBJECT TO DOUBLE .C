#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,x3,y3,x4,y4;
float sx,sy;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
printf("Enter the starting point coordinates:");
scanf("%d %d",&x1,&y1);
printf("Enter the ending point coordinates:");
scanf("%d %d",&x2,&y2);
printf("Enter scaling factors sx,sy:\n");
scanf("%f%f",&sx,&sy);
line(x1,y1,x2,y2);
outtextxy(x2+2,y2+2,"Original line");
setcolor(5);
x3=x1*sx;
y3=y1*sy;
x4=x2*sx;
y4=y2*sy;
line(x3,y3,x4,y4);
outtextxy(x4+2,y4+2,"Line after scaling");
setcolor(7);
getch();
closegraph();
return 0;
}
