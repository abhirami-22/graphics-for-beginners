//bouncing ball
#include<graphics.h>
#include<stdio.h>
int main()
{
	int gd=DETECT,gm;
	int x,y;
	
	initgraph(&gd,&gm,NULL);
	//circle(50,50,4);
	
	for(x=50,y=50;x<300;x++,y++)
	{
		setcolor(RED);
		circle(x,y,12);
		floodfill(x+2,y+2,RED);
		delay(5);
		cleardevice();
		
	}
	for(x=300,y=300;x>50;x--,y--)
	{
		setcolor(RED);
		circle(x,y,12);
		floodfill(x+2,y+2,RED);
		delay(5);
		cleardevice();
		
	}
	getch();
	closegraph();
return(0);
}
