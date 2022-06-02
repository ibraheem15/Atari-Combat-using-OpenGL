#include"ACTUAL HEADER.h"
#include"util.h"


void Map::drawMap()
{

    if (Player::score1 == 1)
    {
        DrawString(150, 800, "Score = 1", colors[MISTY_ROSE]);
    }
    else if (Player::score1 == 2)
        DrawString(150, 800, "Score = 2", colors[MISTY_ROSE]);
    else if (Player::score1 == 3)
        DrawString(150, 800, "Score = 3", colors[MISTY_ROSE]);
    else if (Player::score1 == 4)
        DrawString(150, 800, "Score = 4", colors[MISTY_ROSE]);
    else if (Player::score1 == 5)
    {
        DrawString(150, 800, "Score = 5", colors[MISTY_ROSE]);
        if (bot)
        {
            glutDisplayFunc(Menu::GameOver);
            glutSwapBuffers(); // do not modify this line..
        }
        else
        {
            level++;
            score = 0;
            score1 = 0;
            mapy = false;
            glutDisplayFunc(Menu::draw);
        }
        // glutSwapBuffers(); // do not modify this line..
    }
    else
    {
        DrawString(150, 800, "Score = 0", colors[MISTY_ROSE]);
    }

    if (Player::score == 1)
    {
        DrawString(750, 800, "Score = 1", colors[MISTY_ROSE]);
    }
    else if (Player::score == 2)
        DrawString(750, 800, "Score = 2", colors[MISTY_ROSE]);
    else if (Player::score == 3)
        DrawString(750, 800, "Score = 3", colors[MISTY_ROSE]);
    else if (Player::score == 4)
        DrawString(750, 800, "Score = 4", colors[MISTY_ROSE]);
    else if (Player::score == 5)
    {
        DrawString(750, 800, "Score = 5", colors[MISTY_ROSE]);
        level++;
        score = 0;
        score1 = 0;
        mapy = false;
        glutDisplayFunc(Menu::draw);
        glutSwapBuffers(); // do not modify this line..
    }
    else
    {
        DrawString(750, 800, "Score = 0", colors[MISTY_ROSE]);
    }
    // left
    DrawSquare(250, 250, 20, colors[GREEN]); // bottom wala green
    DrawSquare(270, 250, 20, colors[GREEN]);
    DrawSquare(270, 270, 20, colors[GREEN]);
    DrawSquare(270, 290, 20, colors[GREEN]);
    DrawSquare(250, 290, 20, colors[GREEN]);

    DrawSquare(250, 450, 20, colors[GREEN]); // middle wala green
    DrawSquare(270, 450, 20, colors[GREEN]);
    DrawSquare(270, 470, 20, colors[GREEN]);
    DrawSquare(270, 490, 20, colors[GREEN]);
    DrawSquare(250, 490, 20, colors[GREEN]);

    DrawSquare(250, 650, 20, colors[GREEN]); // upar wala green
    DrawSquare(270, 650, 20, colors[GREEN]);
    DrawSquare(270, 670, 20, colors[GREEN]);
    DrawSquare(270, 690, 20, colors[GREEN]);
    DrawSquare(250, 690, 20, colors[GREEN]);
    // centere
    DrawSquare(450, 250, 20, colors[GREEN]); // bottom wala green
    DrawSquare(470, 250, 20, colors[GREEN]);
    DrawSquare(470, 270, 20, colors[GREEN]);
    DrawSquare(450, 270, 20, colors[GREEN]);
    DrawSquare(470, 290, 20, colors[GREEN]);
    DrawSquare(450, 290, 20, colors[GREEN]);

    DrawSquare(450, 450, 20, colors[GREEN]); // middle wala green
    DrawSquare(470, 450, 20, colors[GREEN]);
    DrawSquare(470, 470, 20, colors[GREEN]);
    DrawSquare(450, 470, 20, colors[GREEN]);
    DrawSquare(470, 490, 20, colors[GREEN]);
    DrawSquare(450, 490, 20, colors[GREEN]);

    DrawSquare(450, 650, 20, colors[GREEN]); // upar wala green
    DrawSquare(470, 650, 20, colors[GREEN]);
    DrawSquare(470, 670, 20, colors[GREEN]);
    DrawSquare(450, 670, 20, colors[GREEN]);
    DrawSquare(470, 690, 20, colors[GREEN]);
    DrawSquare(450, 690, 20, colors[GREEN]);
    // right
    DrawSquare(690, 250, 20, colors[GREEN]); // bottom wala green
    DrawSquare(670, 250, 20, colors[GREEN]);
    DrawSquare(670, 270, 20, colors[GREEN]);
    DrawSquare(670, 290, 20, colors[GREEN]);
    DrawSquare(690, 290, 20, colors[GREEN]);

    DrawSquare(690, 450, 20, colors[GREEN]); // middle wala green
    DrawSquare(670, 450, 20, colors[GREEN]);
    DrawSquare(670, 470, 20, colors[GREEN]);
    DrawSquare(670, 490, 20, colors[GREEN]);
    DrawSquare(690, 490, 20, colors[GREEN]);

    DrawSquare(690, 650, 20, colors[GREEN]); // upar wala green
    DrawSquare(670, 650, 20, colors[GREEN]);
    DrawSquare(670, 670, 20, colors[GREEN]);
    DrawSquare(670, 690, 20, colors[GREEN]);
    DrawSquare(690, 690, 20, colors[GREEN]);
}

void Map::drawMap1()
{
    if (Player::score1 == 1)
    {
        DrawString(150, 800, "Score = 1", colors[MISTY_ROSE]);
    }
    else if (Player::score1 == 2)
        DrawString(150, 800, "Score = 2", colors[MISTY_ROSE]);
    else if (Player::score1 == 3)
        DrawString(150, 800, "Score = 3", colors[MISTY_ROSE]);
    else if (Player::score1 == 4)
        DrawString(150, 800, "Score = 4", colors[MISTY_ROSE]);
    else if (Player::score1 == 5)
    {
        DrawString(150, 800, "Score = 5", colors[MISTY_ROSE]);
        glutDisplayFunc(Menu::GameOver);
        glutSwapBuffers(); // do not modify this line..
    }
    else
    {
        DrawString(150, 800, "Score = 0", colors[MISTY_ROSE]);
    }

    if (Player::score == 1)
    {
        DrawString(750, 800, "Score = 1", colors[MISTY_ROSE]);
    }
    else if (Player::score == 2)
        DrawString(750, 800, "Score = 2", colors[MISTY_ROSE]);
    else if (Player::score == 3)
        DrawString(750, 800, "Score = 3", colors[MISTY_ROSE]);
    else if (Player::score == 4)
        DrawString(750, 800, "Score = 4", colors[MISTY_ROSE]);
    else if (Player::score == 5)
    {
        DrawString(750, 800, "Score = 5", colors[MISTY_ROSE]);
        glutDisplayFunc(Menu::GameOver);
        glutSwapBuffers(); // do not modify this line..
    }
    else
    {
        DrawString(750, 800, "Score = 0", colors[MISTY_ROSE]);
    }

    DrawLine(250, 500, 410, 500, 30, colors[SKY_BLUE]);
    DrawLine(220, 480, 430, 480, 30, colors[SKY_BLUE]);
    DrawLine(210, 460, 450, 460, 30, colors[SKY_BLUE]);
    DrawLine(210, 440, 450, 440, 30, colors[SKY_BLUE]);
    DrawLine(230, 420, 430, 420, 30, colors[SKY_BLUE]);
    DrawLine(250, 400, 410, 400, 30, colors[SKY_BLUE]);

    DrawLine(650, 500, 810, 500, 30, colors[SKY_BLUE]);
    DrawLine(620, 480, 830, 480, 30, colors[SKY_BLUE]);
    DrawLine(610, 460, 850, 460, 30, colors[SKY_BLUE]);
    DrawLine(610, 440, 850, 440, 30, colors[SKY_BLUE]);
    DrawLine(630, 420, 830, 420, 30, colors[SKY_BLUE]);
    DrawLine(650, 400, 810, 400, 30, colors[SKY_BLUE]);
}