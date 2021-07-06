//bresenham's line drawing algorithm when m>1
#include<graphics.h>
int main()
{
	int xs,ys,xe,ye,pk,x,y,c=0;
	float m,dy,dx;
	int gd=DETECT,gm;
	
	printf("Enter starting point coordinates: ");
	scanf("%d %d",&xs,&ys);
	printf("Enter end point coordinates: : ");
	scanf("%d %d",&xe,&ye);
	
	dx=xe-xs;
	dy=ye-ys;
	m=dy/dx;
	printf("Slope: %f",m);
	
	x=xs;
	y=ys;
 
 	initgraph(&gd,&gm,NULL);
 	
	pk=2*dx-dy;
 	
	while(c<dy)
	{
		//printf("pk=%d",pk);
		putpixel(x,y,9);
		//printf("(%d,%d) ",x,y);
		if(pk>=0)
		{ 
			x=x+1;
			pk=pk+(2*dx)-(2*dy);
		}
		else
		{
			pk=pk+(2*dx);
		}
		y=y+1;
		c++;
	}
	
	putpixel(x,y,9);
 	//printf("(%d,%d) ",x,y);
 	
 	delay(20);
	getch();
	closegraph();
	
	
return 0;	
}	
