//filled square
#include<graphics.h>
#include<stdio.h>
int main()
{
	int c
	int gd=DETECT,gm;
	
	initgraph(&gd,&gm,NULL);
	setbkcolor(CYAN);
	outtextxy(100,100,"Square");
	
	setcolor(RED);
	rectangle(200,200,300,300);
	setcolor(YELLOW);
	floodfill(250,250,4);
	
	getch();
	closegraph();
return(0);
}
