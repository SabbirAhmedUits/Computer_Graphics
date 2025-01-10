#include <iostream>
#include <graphics.h>

void drawLine(int x0, int y0, int x1, int y1) {
    int dx, dy, p, x, y;
    dx = x1 - x0;
    dy = y1 - y0;
    x = x0;
    y = y0;
    p = 2 * dy - dx;

    while (x < x1) {
        putpixel(x, y, 7);
        if (p >= 0) {
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        } else {
            p = p + 2 * dy;
        }
        x = x + 1;
    }

}

int main() {
    int gdriver = DETECT, gmode, error, x0, y0, x1, y1;
    initgraph(&gdriver, &gmode, " ");

    std::cout << "Enter coordinates of first point: ";
    std::cin >> x0 >> y0;

    std::cout << "Enter coordinates of second point: ";
    std::cin >> x1 >> y1;

    drawLine(x0, y0, x1, y1);

    return 0;
}

