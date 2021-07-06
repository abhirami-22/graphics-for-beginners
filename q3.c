//star using 2 triangles
#include<graphics.h>
#include<stdio.h>
int main()
{
	int gd=DETECT,gm;
	
	initgraph(&gd,&gm,NULL);
	setcolor(CYAN);
	line(200,100,100,300);
	line(100,300,300,300);
	line(300,300,200,100);
	
	setcolor(YELLOW);
	line(100,150,200,350);
	line(200,350,300,150);
	line(300,150,100,150);
	
	getch();
	closegraph();
return(0);
}
