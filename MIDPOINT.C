#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int x, y, x2, y2, radius, p;
int gd=DETECT,gm;
initgraph(&gd, &gm, "C\\TC\\BGI");
printf("Enter the co-ordinates: ");
scanf("%d%d", &x2, &y2);
printf("\nEnter the radius: ");
scanf("%d", &radius):
x=0;
y=radius;
p=1-radius;
do
{
putpixel(x2+x,y2+y,1);
putpixel(x2+y,y2+x,2);
putpixel(x2-y,y2+x,3);
putpixel(x2-x,y2+y,4);
putpixel(x2-x,y2-y,5);
putpixel(x2-y,y2-x,6);

putpixel(x2+y,y2-x,7);
putpixel(x2+x,y2-y,8);
if(p<0)
{ p+=(2*x)+1;
}
else{
y=y-1;
p+=(2*x)-(2*y)+1;
}




