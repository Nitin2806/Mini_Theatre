#include<stdio.h>
#include<conio.h>
void box1(int x,int y)
{
	{
	system("COLOR 97");

	int i,j,x1,x0,y1,y0,a;

	x1=30+2*x;
	y1=5+y;

	x0=30;
	y0=5;


	system("cls");
	gotoxy (x0,y0);
	for(i=0;i<x;i++)
	{
		printf("* ");
		Sleep(5);
	}
	printf("*");
	for(j=0;j<y;j++)
	{
		gotoxy (x1,y0+j);

		printf("*");
		Sleep(5);

	}

	for(i=0;i<x;i++)
	{
		gotoxy (x1-2*i,y1);
		printf("*");
		Sleep(5);
	}
	for(j=0;j<=y;j++)
	{
		gotoxy (x0,y1-j);

		printf("*");
		Sleep(5);
	}
	}}
