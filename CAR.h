#include "ACTUAL HEADER.h"
#include "util.h"

void Player::drawCar()
{
    if (car)
    {
        DrawLine(xI + 10, yI, xI + 10, yI + 50, 10, colors[DARK_SEA_GREEN]);      // stright
        DrawLine(xI + 15, yI, xI + 15, yI + 50, 10, colors[DARK_SEA_GREEN]);      // stright
        DrawLine(xI + 20, yI, xI + 20, yI + 50, 10, colors[DARK_SEA_GREEN]);      // stright
        DrawLine(xI, yI + 50, xI + 30, yI + 50, 10, colors[DARK_SEA_GREEN]);      // up right
        DrawLine(xI + 10, yI + 25, xI + 38, yI + 25, 10, colors[DARK_SEA_GREEN]); // toppp
        DrawLine(xI, yI, xI + 30, yI, 10, colors[DARK_SEA_GREEN]);                // bottom right

        DrawLine(x1 + 10, y1, x1 + 10, y1 + 50, 10, colors[YELLOW_GREEN]);     // stright
        DrawLine(x1 + 15, y1, x1 + 15, y1 + 50, 10, colors[YELLOW_GREEN]);     // stright
        DrawLine(x1 + 20, y1, x1 + 20, y1 + 50, 10, colors[YELLOW_GREEN]);     // stright
        DrawLine(x1, y1 + 50, x1 + 30, y1 + 50, 10, colors[YELLOW_GREEN]);     // up right
        DrawLine(x1 - 7, y1 + 25, x1 + 20, y1 + 25, 10, colors[YELLOW_GREEN]); // toppp
        DrawLine(x1, y1, x1 + 30, y1, 10, colors[YELLOW_GREEN]);               // bottom right
    }
    else
    {
        DrawLine(xI + 10, yI, xI + 30, yI, 10, colors[DARK_SEA_GREEN]);           // up right
        DrawLine(xI + 10, yI + 10, xI + 30, yI + 10, 10, colors[DARK_SEA_GREEN]); // up right
        DrawLine(xI - 10, yI + 5, xI + 30, yI + 5, 7, colors[DARK_SEA_GREEN]);    // up right long one
        DrawLine(xI + 20, yI, xI + 20, yI + 35, 10, colors[DARK_SEA_GREEN]);      // stright
        DrawLine(xI + 5, yI + 35, xI + 35, yI + 35, 7, colors[DARK_SEA_GREEN]);   // wing
        DrawLine(xI - 10, yI, xI - 10, yI + 20, 4, colors[DARK_SEA_GREEN]);       // stright

        DrawLine(x1 + 10, y1, x1 - 10, y1, 10, colors[YELLOW_GREEN]);           // up right
        DrawLine(x1 + 10, y1 + 10, x1 - 10, y1 + 10, 10, colors[YELLOW_GREEN]); // up right
        DrawLine(x1, y1 + 5, x1 + 30, y1 + 5, 7, colors[YELLOW_GREEN]);         // up right long one
        DrawLine(x1, y1, x1, y1 + 35, 10, colors[YELLOW_GREEN]);                // stright
        DrawLine(x1 - 15, y1 + 35, x1 + 15, y1 + 35, 7, colors[YELLOW_GREEN]);  // wing
        DrawLine(x1 + 30, y1, x1 + 30, y1 + 20, 4, colors[YELLOW_GREEN]);       // stright
    }
    // cout<<"Xzzzz:"<<x<<endl;

    glutPostRedisplay();
}

