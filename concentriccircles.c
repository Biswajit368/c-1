#include<graphics.h>
#include<conio.h>
  
int main(){
   int gd = DETECT,gm;
   int x ,y;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   /* Center of Circle is initialized in the center of screen */
   x = g#include<stdio.h>
etmaxx()/2;
   y = getmaxy()/2;
  
   outtextxy(240, 50, "Concentric Circles");
   /* Start drawing circles on screen */
   setcolor(RED);
   circle(x, y, 30);
   setcolor(GREEN);
   circle(x, y, 50);
   setcolor(YELLOW);
   circle(x, y, 70);
   setcolor(BLUE);
   circle(x, y, 90);
  
   getch();
   closegraph();
   return 0;
}
