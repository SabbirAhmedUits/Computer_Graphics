//Rotation

#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

   float xp, yp, x, y, d;
    cin>>x>>y>>d;
    d=d*3.1416/180;

    xp=(x*cos(d))+(y*sin(d));
    yp=-(x*sin(d))+(y*cos(d));


    line(0, 0, x, y);
    line(0, 0, xp, yp);




    getch();
    closegraph();
    return 0;
}




