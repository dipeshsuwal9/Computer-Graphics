#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Draw a circle
    circle(200, 200, 100);

    // Draw a rectangle
    rectangle(150, 150, 250, 250);

    // Draw a line
    line(100, 300, 300, 300);

    // Add some text
    outtextxy(150, 270, "Hello Graphics!");

    // Wait for user input to close
    getch();
    closegraph();

    return 0;
}
