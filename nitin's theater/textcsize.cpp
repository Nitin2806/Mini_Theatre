#include<conio.h>

int main()
{
int gd,gm;
initgraph(&gd,&gm,"c:\\tc\bgi");
setcolor(5);
setbkcolor(WHITE);
settextstyle(4,0,4);
outtextxy(5,10,"Welcome to graphics in C");
return 0;
}
