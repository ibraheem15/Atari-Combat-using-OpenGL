/***********************
 **  Ibraheem Rehman  **
 **  SE-Q    21i-1102 **
 ***********************/
#include <iso646.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctime>

#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include "util.h"
using namespace std;

#include "ACTUAL HEADER.h"
#include "SHOOT.h"
#include "MAP.h"
#include "CAR.h"
#include "MOVEMENT.h"
#include "MENU.h"
#include "FILE HANDLING.h"
#include "PROGRESS.h"

int Player::random()
{
    time_t t = time(0);
    int result = t % 2;
    cout << "Tinme: " << result << endl;
    return result;
}
Map::Map()
{
    Mapid = 0;
}

Player::Player()
{
    // Map m;
    name = "";
    x = 100;
    y = 400;

    xI = 100;
    yI = 400;

    x1 = 900;
    y1 = 400;

    xS = xI;
    xS = yI;
    xB = x1;
    yB = y1;
    if (level == 0)
    {
        mapy = true;
        car = true;
    }
    else
    {
        mapy = false;
        car = false;
    }
}
void Player::setName(string name)
{
    this->name = name;
}
int Player::getID()
{
    return id;
}
string Player::Name()
{
    return name;
}
void Player::setScore(int score)
{
    score = score;
}
int Player::getScore()
{
    return score;
}

int Player::getRandomIntExcludingRange(int start, int end, int start_range, int end_range)
{

    // handle bad input gracefully
    if (start > end)
    {
        std::swap(start, end);
    }
    if (start_range > end_range)
    {
        std::swap(start_range, end_range);
    }
    std::clamp(start_range, start, end);
    std::clamp(end_range, start, end);

    auto range_length = end_range - start_range;
    auto adj_end = end - range_length;
    auto shifted_end = adj_end - start;

    int rand_int = (rand() % shifted_end) + start;

    if (rand_int >= start_range)
    {
        rand_int = (rand_int - start_range) + end_range;
    }
    return rand_int;
}

void Player::draw()
{
    //cout<<"bla: "<<Drawbullet1<<endl;
    if (Player::level == 0)
        Player::mapy = true;
    else
        Player::mapy = false;

    glClearColor(0 /*Red Component*/, 0,                         // 148.0/255/*Green Component*/,
                 0.0 /*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
    glClear(GL_COLOR_BUFFER_BIT);
    drawCar();

    if (mapy || bot ||mapy1)
    {
        Map::drawMap();
    }
    else
        Map::drawMap1();

    if (Drawbullet)
        draw_bullet();

    if (Drawbullet1)
    {
        draw_bullet1();
    }
    if (Drawbullet2)
    {
        draw_bullet1();
    }
    glutSwapBuffers(); // do not modify this line..

    glutPostRedisplay();
}


void Player::Timer1(int m)
{
    if (Drawbullet1)
    {
        shoot1();
    }
    glutTimerFunc(100, Player::Timer1, 0);
}
void Player::Timer2(int m)
{
    if (Drawbullet)
        shoot();
    glutTimerFunc(100, Player::Timer2, 0);
}

void Player::Timer(int m)
{

    
    /* if (Drawbullet)
        shoot(); */

    /* if (Drawbullet1)
    {
        shoot1();
    } */
    if (Drawbullet2)
    {
        shoot2();
    }
    if (bot)
        AImove();

    // once again we tell the library to call our Timer function after next 1000/FPS
    glutTimerFunc(100, Player::Timer, 0);
}

void SetCanvasSize(int width, int height)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char *argv[])
{
    Menu menu;
    Player p1, p2;
    p1.setName("Ibraheem");
    p2.setName("Abuzar");
   
    int width = 1020, height = 840; // i have set my window size to be 800 x 600

    InitRandomizer();                              // seed the random number generator...
    glutInit(&argc, argv);                         // initialize the graphics library...
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);  // we will be using color display mode
    glutInitWindowPosition(50, 50);                // set the initial position of our window
    glutInitWindowSize(width, height);             // set the size of our window
    glutCreateWindow("COMBAT by Ibraheem Rehman"); // set the title of our game window
    SetCanvasSize(width, height);                  // set the number of pixels...

    // Register your functions to the library,
    // you are telling the library names of function to call for different tasks.
    // glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

    glutSpecialFunc(Player::NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
    glutKeyboardFunc(Player::PrintableKeys);   // tell library which function to call for printable ASCII characters
    glutDisplayFunc(menu.StartMenu);           // tell library which function to call for drawing Canvas.
                                               // glutDisplayFunc(p2.drawCar); // tell library which function to call for drawing Canvas.


    // glutTimerFunc(1000.0, Player::Timer, 0); //  This function tells the library to call our Timer function after 1000.0/FPS milliseconds...

    glutMouseFunc(Player::MouseClicked);
    
    PlaySound(TEXT("mixkit-game-level-music-689.wav"), NULL, SND_ASYNC | SND_LOOP);

    // now handle the control to library and it will call our registered functions when
    // it deems necessary...
    glutMainLoop();
    return 1;
}
