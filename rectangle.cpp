#include<graphics.h>
#include<conio.h>

int main()
{
    int i=0, j=0, gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    for(i=0;i<=420;i=i+10)
    {

    setcolor(RED);
    rectangle(50+i,50,150+i,100);
    rectangle(150+i,75,180+i,100);
    circle(75+i, 110+i, 12);
    circle(125+i, 110+i, 12);

    delay(100);
    }


    getch();

    closegraph();
    return 0;
}
