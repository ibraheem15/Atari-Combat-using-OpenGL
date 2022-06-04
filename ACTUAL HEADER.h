/***********************
 **  Ibraheem Rehman  **
 **  SE-Q    21i-1102 **
 ***********************/
 #pragma once
#include "util.h"

class Map;
class Menu;
class Progress;

class Player
{
protected:
    Map *m;
    static int number;
    static int x;
    static int xI;
    static int x1;
    static int y;
    static int yI;
    static int y1;
    static int score;
    static int score1;
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
    static bool Drawbullet;
    static bool Drawbullet1;
    static bool Drawbullet2;
    static int level;
    static int xS, yS;
    static int xB, yB;

    static bool mapy;
    static bool mapy2;
    static bool mapy1;
    static bool car;

public:
    Player();
    static int random();
    void setName(string name);
    int getID();
    string Name();

    void setScore(int score);
    int getScore();

    void draw1();
    static void draw();
    static void drawCar();

    void moveCar();

    static void AIshoot();
    static void AImove();
    static void shoot();
    static void shoot1();
    static void shoot2();
    static void draw_bullet();
    static void draw_bullet1();
    static void draw_bullet2();

    static int getRandomIntExcludingRange(int start, int end, int start_range, int end_range);
    static void NonPrintableKeys(int key, int x, int y);
    static int Timer(int m);
    static int Timer1(int m);
    static int Timer2(int m);
    static void PrintableKeys(unsigned char key, int x, int y);
    static void MouseClicked(int button, int state, int x, int y);
};
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
int Player::level =random();
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
bool Player::mapy = true;// random();
bool Player::mapy1 = false;// random();
bool Player::mapy2 = false;// random();
bool Player::car = true;//random();
string Player::name = "";


class Progress: public Player
{
private:
    //string barstring;
        
public:
    //Progress();
    static void writeScore();
    static void readScore();
};
class Map : public Progress
{
protected:
    int Mapid;

public:
    Map();
    static void drawMap();
    static void drawMap1();
};

class Menu : public Player
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
