#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETETCT,gm;
initgraph(&gd,&gm,"c:\\tc\bgi");
setcolor(BLUE);
setbkcolor(WHITE);
settextstyle(4,0,4);
outtextxy(5,10,"Welcome to graphics in C");
return 0;
}
