#include <graphics.h>
#include <conio.h>

int main() {
    // Initialize graphics mode and driver
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set background color
    setbkcolor(WHITE);
    cleardevice();

    // Set drawing color
    setcolor(BLUE);

    // Draw a line
    line(100, 100, 300, 300);

    // Draw a circle
    circle(200, 200, 50);

    // Display some text
    outtextxy(150, 350, "Graphics Test Successful!");

    // Wait for user input to close
    getch();
    closegraph();
    return 0;
}
