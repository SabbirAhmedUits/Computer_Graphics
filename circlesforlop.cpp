#include<graphics.h>
#include<conio.h>
int main(){
int gd= DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");


  line(250, 250, 450, 150);

for(int i=50;i<=200;i=+20)
{
    circle(150,150,i);
}



   line(250, 250, 250, 250);

getch();
closegraph();
return 0;
}
