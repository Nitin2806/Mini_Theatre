#include<graphic.h>
#include<time.h>
int main()
{
int gd=DETECT;
int gm;
initgraph (&gd, sgm, "C:\\TC\\BGI");
time_t rawTime;
struct tm*current Time;
char a [100]
while(1)
{
      rawTime time (NULL);
       current Time = localtime (&rawTime);
      strftime (a, 100, "%I:%M:%S", current Time);

     setcolour(11);
     settextstyle(3,HORIZ_DIR,10);
     outtextxy(200,100,a);

strftime(a,100,"%p",currentTime);
settextstyle(3,HORIZ_DIR,2);
outtextxy(600,8,a);

strftime(a,100,"%a,%d,%b,%Y",currentTime);
settextstyle(3,HORIZ_DIR,5);
outtextxy(130,310,a);
delay(1000);
}
getch();
closegraph ();
}
