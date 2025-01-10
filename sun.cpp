#include<graphics.h>
#include<conio.h>
int main(){
int gd= DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(GREEN);

circle(250,250,100);

for(int i=50;i<=200;i+=20)
{
    line(50+i, 50+i, 100+i, 100+i);
}








getch();
closegraph();
return 0;
}
