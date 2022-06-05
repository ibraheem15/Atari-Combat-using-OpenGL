/***********************
 **  Ibraheem Rehman  **
 **  SE-Q    21i-1102 **
 ***********************/
#pragma once
#include "util.h"

// forward declaration to notify the compiler about other classes
class Map;
class Menu;
class Progress;

// have to make almost everything static because glut only accepts static fucntioins in for examply glutDisplayFunc
// this is why we need to declare other members as static because static can only access static members

class Player
{
protected:
    Map *m;
    static int number;
    static int x;      // Controls the axis of Player 1
    static int xI;     // Controls the axis of Player 1
    static int x1;     // Controls the axis of Player 2
    static int y;      // Controls the axis of Player 1
    static int yI;     // Controls the axis of Player 1
    static int y1;     // Controls the axis of Player 2
    static int score;  // score of the player 2
    static int score1; // score of the player 1
    static bool flag;
    static bool flag2;
    static bool flag3;
    static bool flag4;
    static bool flag5;
    static bool AI;
    static bool bot;
    int id = 0;
    int id1 = 0;
    static string name;
    static bool Drawbullet;  // bullet for player 1
    static bool Drawbullet1; // bullet for player 2
    static bool Drawbullet2; // bullet for BOT
    static int level;
    static int AIlevel;
    static int xS, yS; // bullet axis of player 1
    static int xB, yB; // bullet axis of player 2

    static bool mapy;
    static bool mapy1;
    static bool mapy2;
    static bool car;

public:
    Player();
    static int random(); // generates random number
    void setName(string name);
    int getID();
    string Name();

    void setScore(int score);
    int getScore();

    void draw1();
    static void draw(); // main display function
    static void drawCar();

    void moveCar();

    // AI Bot movemnet and shoot
    static void AIshoot();
    static void AImove();

    static void shoot();  // shoot function for player 1
    static void shoot1(); // shoot function for player 2
    static void shoot2(); // shoot function for BOT

    static void draw_bullet();  // draw the bullet
    static void draw_bullet1(); // draw the bullet
    static void draw_bullet2(); // draw the bullet

    static int Timer(int m);
    static int Timer1(int m);
    static int Timer2(int m);
    static int Timer3(int m);

    // glut Funcitons
    static void NonPrintableKeys(int key, int x, int y);
    static int getRandomIntExcludingRange(int start, int end, int start_range, int end_range);
    static void PrintableKeys(unsigned char key, int x, int y);
    static void MouseClicked(int button, int state, int x, int y);
};
// initializing static members
int Player::number = 0;
int Player::x = 0;
int Player::xS = 0;
int Player::xB = 0;
int Player::xI = 0;
int Player::x1 = 0;
int Player::y1 = 0;
int Player::y = 0;
int Player::yS = 0;
int Player::yB = 0;
int Player::yI = 0;
int Player::score = 0;
int Player::score1 = 0;
int Player::level = random();
int Player::AIlevel = 0;
bool Player::Drawbullet = false;
bool Player::Drawbullet1 = false;
bool Player::Drawbullet2 = false;
bool Player::flag = true;
bool Player::flag2 = true;
bool Player::flag3 = true;
bool Player::flag4 = true;
bool Player::flag5 = true;
bool Player::AI = true;
bool Player::bot = false;
bool Player::mapy = true;
bool Player::mapy1 = false;
bool Player::mapy2 = false;
bool Player::car = true;
string Player::name = "";

class Progress : public Player // inheritance so that we can get the score of the player
{
private:
public:
    static void writeScore();
    static void readScore();
    static void endScore();
};

class Map : public Progress // inheritance so that we can get the score and level of the player
{
protected:
    int Mapid;

public:
    Map();
    static void drawMap();
    static void drawMap1();
};

class Menu : public Player // inheritance so that we can get the score and edit the score of the player
{
protected:
    int id;

public:
    Menu();
    static void StartMenu();
    static void botOrhuman();
    static void GameOver();
    static void ShowScores();
    static void readFromFile();
    static void writeIntoFile();
};
