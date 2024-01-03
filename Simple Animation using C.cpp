#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<windows.h>
#include<stdlib.h>

void car(void) {

int i, maxx, midy;

maxx = getmaxx();
midy = getmaxy()/2; 
 
for(i=0; i < maxx-150; i=i+5) {
	
cleardevice();

/* draw a white road */
        
setcolor(WHITE);
        
line(0, midy + 37, maxx, midy + 37);
 
        
/* Draw Car */
        
setcolor(YELLOW);
        
setfillstyle(SOLID_FILL, RED);
 
        
line(i, midy + 23, i, midy); 
line(i, midy, 40 + i, midy - 20);
line(40 + i, midy - 20, 80 + i, midy - 20);
line(80 + i, midy - 20, 100 + i, midy);
line(100 + i, midy, 120 + i, midy);
line(120 + i, midy, 120 + i, midy + 23);
line(0 + i, midy + 23, 18 + i, midy + 23);
arc(30 + i, midy + 23, 0, 180, 12);


line(42 + i, midy + 23, 78 + i, midy + 23);
arc(90 + i, midy + 23, 0, 180, 12);
line(102 + i, midy + 23, 120 + i, midy + 23);
line(28 + i, midy, 43 + i, midy - 15);
line(43 + i, midy - 15, 57 + i, midy - 15);
line(57 + i, midy - 15, 57 + i, midy);
line(57 + i, midy, 28 + i, midy);
line(62 + i, midy - 15, 77 + i, midy - 15);
line(77 + i, midy - 15, 92 + i, midy);
line(92 + i, midy, 62 + i, midy);
line(62 + i, midy, 62 + i, midy - 15);

////for traffic light stand 
//line(400,midy+37,400,midy-60);
//rectangle(380,midy-140,420,midy-60);
//
//circle(400,midy-122,10);
//circle(400,midy-97,10);
//circle(400,midy-72,10);
//
////for check point //
//rectangle(345,midy+37,365,midy+41);

floodfill(5 + i, midy + 22, YELLOW);
setcolor(BLUE);
setfillstyle(SOLID_FILL, DARKGRAY);
circle(30 + i, midy + 25, 9);
circle(90 + i, midy + 25, 9);        
floodfill(30 + i, midy + 25, BLUE);
floodfill(90 + i, midy + 25, BLUE);
}
   getch();
   closegraph();
}


int main()
{
	int x,y,x1,y1,i;
	system("color 10");
	printf("\n\n\n\n\n");
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	
	x1=getmaxx()/2-30;
	y1=getmaxy()/2-80;
	
	settextstyle(4,0,10);
	outtextxy(x1-40,y1,"10");
	delay(1000);
	cleardevice();
	outtextxy(x1,y1,"9");
	delay(1000);
	cleardevice();
	outtextxy(x1,y1,"8");
	delay(1000);
	cleardevice();
	outtextxy(x1,y1,"7");
	delay(1000);
	cleardevice();
	outtextxy(x1,y1,"6");
	delay(1000);
	cleardevice();
	outtextxy(x1,y1,"5");
	delay(1000);
	cleardevice();
	outtextxy(x1,y1,"4");
	delay(1000);
	cleardevice();
	outtextxy(x1,y1,"3");
	delay(1000);
	cleardevice();
	outtextxy(x1,y1,"2");
	delay(1000);
	cleardevice();
	outtextxy(x1,y1,"1");
	delay(1000);
	cleardevice();
	outtextxy(x1,y1,"0");
	delay(1000);
	cleardevice();
	delay(1000);
	
	settextstyle(0, HORIZ_DIR, 2);
	outtextxy(50,400,"Ground of Bhaktapur Multiple campus !!!\n ");
	outtextxy(10,200,"Date: 2078-08-12\n Fuel: Full ; \n Velocity: 40km/hr\n");
	outtextxy(10,250," Enjoy Automatic car by Sudip Dhakal");
    delay(3000);
	
	
	car();
	getch();
	return 0;
}

