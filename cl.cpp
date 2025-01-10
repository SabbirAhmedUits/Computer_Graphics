#include<graphics.h>
#include<conio.h>
int main(){
int gd= DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(GREEN);
circle(150,150,100);


getch();
closegraph();
return 0;
}

