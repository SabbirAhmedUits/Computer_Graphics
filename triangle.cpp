#include<graphics.h>
#include<conio.h>

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");


    line(150, 150, 450, 150);


    line(150, 150, 300, 30);

    line(450, 150, 300, 30);

    line(150, 150, 150, 400);

    line(450, 150, 450, 400);

        line(150, 400, 450, 400);



    getch();

    closegraph();
    return 0;
}
