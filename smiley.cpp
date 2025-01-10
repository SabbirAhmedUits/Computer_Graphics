#include<graphics.h>
#include<conio.h>
int main(){
int gd= DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(GREEN);
circle(120,120,10);
circle(160,120,10);
circle(150,150,100);
arc(140, 150, 205, 335, 50 );

getch();
closegraph();
return 0;
}
