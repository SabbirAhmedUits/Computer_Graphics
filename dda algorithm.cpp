#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 50, y1 = 50;
    int x2 = 100, y2 = 150;


    int dx = x2 - x1;
    int dy = y2 - y1;


    int steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);


    float xInc = dx / (float)steps;
    float yInc = dy / (float)steps;


    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);
        x += xInc;
        y += yInc;
    }

    getch();
    closegraph();

    return 0;
}


