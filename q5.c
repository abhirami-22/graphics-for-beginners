//bresenham's line drawing algorithm when m<1
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
 	
	pk=2*dy-dx;
 	
 	
	while(c<dx)
	{
		putpixel(x,y,7);
		printf("(%d,%d) ",x,y);
		
		if(pk>=0)
		{	
			y=y+1;
			pk=pk+2*dy-2*dx;
		}
		else
		{
			pk=pk+2*dy;
		}
		x=x+1;
		c++;
	}
	
	putpixel(x,y,7);
	printf("(%d,%d) ",x,y);
	
	getch();
	closegraph();
	
	
return 0;	
}	
