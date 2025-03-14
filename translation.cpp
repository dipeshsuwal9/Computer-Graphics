#include <iostream>
#include <graphics.h>
#include <conio.h>

using namespace std;

void drawAxes(int x, int y) {
    line(x - 200, y, x + 200, y);
    line(x, y - 200, x, y + 200);
    outtextxy(x + 210, y, "X");
    outtextxy(x, y - 210, "Y");
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;
    drawAxes(centerX, centerY);

    int choice;
    char continueChoice;

    do {
        cleardevice();
        drawAxes(centerX, centerY);

        cout << "\nTransformation Menu\n"
             << "1. Translation\n"
             << "2. Scaling\n"
             << "3. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int tx, ty;
                cout << "Enter translation factors (tx, ty): ";
                cin >> tx >> ty;

                int x1, y1, x2, y2;
                cout << "Enter first point (x1, y1): ";
                cin >> x1 >> y1;
                cout << "Enter second point (x2, y2): ";
                cin >> x2 >> y2;

                // Draw original line
                setcolor(WHITE);
                line(centerX + x1, centerY - y1, centerX + x2, centerY - y2);

                // Calculate translated coordinates
                int tx1 = x1 + tx, ty1 = y1 + ty;
                int tx2 = x2 + tx, ty2 = y2 + ty;

                // Draw translated line
                setcolor(BLUE);
                line(centerX + tx1, centerY - ty1, centerX + tx2, centerY - ty2);
                break;
            }
            case 2: {
                int sx, sy;
                cout << "Enter scaling factors (sx, sy): ";
                cin >> sx >> sy;

                int x1, y1, x2, y2, x3, y3;
                cout << "Enter triangle coordinates:\n";
                cout << "Point 1 (x1, y1): ";
				cin >> x1 >> y1;
                cout << "Point 2 (x2, y2): ";
				cin >> x2 >> y2;
                cout << "Point 3 (x3, y3): ";
				cin >> x3 >> y3;

                // Draw original triangle
                setcolor(WHITE);
                line(centerX + x1, centerY - y1, centerX + x2, centerY - y2);
                line(centerX + x2, centerY - y2, centerX + x3, centerY - y3);
                line(centerX + x3, centerY - y3, centerX + x1, centerY - y1);

                // Calculate scaled coordinates
                int sx1 = x1 * sx, sy1 = y1 * sy;
                int sx2 = x2 * sx, sy2 = y2 * sy;
                int sx3 = x3 * sx, sy3 = y3 * sy;

                // Draw scaled triangle
                setcolor(BLUE);
                line(centerX + sx1, centerY - sy1, centerX + sx2, centerY - sy2);
                line(centerX + sx2, centerY - sy2, centerX + sx3, centerY - sy3);
                line(centerX + sx3, centerY - sy3, centerX + sx1, centerY - sy1);
                break;
            }
            case 3:
                cout << "Exiting program.\n";
                exit(0);
                break;
            default:
                cout << "Invalid choice!\n";
        }

            cout << "\nDo you want to continue? (y/n): ";
            cin >> continueChoice;
    } while(continueChoice != 'n');

    getch();
    closegraph();
    return 0;
}
