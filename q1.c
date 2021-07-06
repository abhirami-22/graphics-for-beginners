//concentric circles
#include<graphics.h>
int main()
{
	int i,j,r,x,y,n=1,colour=1;
	int gd=DETECT,gm;
	
	printf("Enter initial circle radius : ");
	scanf("%d",&r);
	printf("Enter x and y coordinates : ");
	scanf("%d %d",&x, &y);
	
	initgraph(&gd,&gm,NULL);
	outtextxy(25,25,"Concentric circles");
	
	for(i=x,j=y;n<=5;i++,j++)
	{
		
		setcolor(colour);
		circle(x,y,r);
		n++;
		r+=5;
		colour++;
	}
	getch();
	closegraph();
	printf("Graphic mode terminated");
	
return(0);		
}
