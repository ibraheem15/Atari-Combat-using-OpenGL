#include"ACTUAL HEADER.h"
#include"util.h"

Menu::Menu()
{
    int id = 0;
}
void Menu::StartMenu()
{

    glClearColor(1 /*Red Component*/, 0,                         // 148.0/255/*Green Component*/,
                 0.0 /*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
    glClear(GL_COLOR_BUFFER_BIT);

    glClearColor(1, 0, 0, 0);
    DrawLine(730, 100, 730, 750, 30, colors[BLACK]);
    DrawLine(230, 100, 730, 100, 30, colors[BLACK]);
    DrawLine(230, 100, 230, 750, 30, colors[BLACK]);
    DrawLine(230, 750, 730, 750, 30, colors[BLACK]);

    DrawRoundRect(350, 530, 250, 100, colors[YELLOW], 20);
    DrawRoundRect(350, 380, 250, 100, colors[YELLOW], 20);
    DrawRoundRect(350, 220, 250, 100, colors[YELLOW], 20);

    DrawString(430, 570, "Play Game", colors[MISTY_ROSE]);
    DrawString(445, 420, "Scores", colors[MISTY_ROSE]);
    DrawString(450, 265, "Exit", colors[MISTY_ROSE]);

    glutSwapBuffers();
}

void Menu::GameOver()
{
    writeIntoFile();
    glClearColor(1, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT); // Update the colors
    DrawLine(730, 100, 730, 750, 30, colors[BLACK]);
    DrawLine(230, 100, 730, 100, 30, colors[BLACK]);
    DrawLine(230, 100, 230, 750, 30, colors[BLACK]);
    DrawLine(230, 750, 730, 750, 30, colors[BLACK]);

    DrawRoundRect(350, 530, 250, 100, colors[YELLOW], 20);
    DrawRoundRect(350, 380, 250, 100, colors[YELLOW], 20);
    DrawRoundRect(350, 220, 250, 100, colors[YELLOW], 20);

    DrawString(430, 570, "GAME OVER", colors[MISTY_ROSE]);
    if (Player::score1 > Player::score)
        DrawString(400, 420, "Game Won by Player 1", colors[MISTY_ROSE]);
    else
        DrawString(400, 420, "Game Won by Player 2", colors[MISTY_ROSE]);

    DrawString(450, 265, "Exit", colors[MISTY_ROSE]);
    glutSwapBuffers(); // do not modify this line..
}

void Menu::ShowScores()
{

    glClearColor(1, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT); // Update the colors
    DrawLine(730, 100, 730, 750, 30, colors[BLACK]);
    DrawLine(230, 100, 730, 100, 30, colors[BLACK]);
    DrawLine(230, 100, 230, 750, 30, colors[BLACK]);
    DrawLine(230, 750, 730, 750, 30, colors[BLACK]);

    
    DrawRoundRect(350, 250, 250, 420, colors[YELLOW], 20);

    readFromFile();

    glutSwapBuffers(); // do not modify this line..
}

void Menu::botOrhuman()
{
    glClearColor(1 /*Red Component*/, 0,                         // 148.0/255/*Green Component*/,
                 0.0 /*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
    glClear(GL_COLOR_BUFFER_BIT);                                // Update the colors

    DrawLine(830, 150, 830, 750, 30, colors[BLACK]); // right upar
    DrawLine(330, 150, 330, 750, 30, colors[BLACK]); // right upar
    DrawLine(630, 150, 630, 750, 30, colors[BLACK]); // right upar

    DrawLine(130, 150, 830, 150, 30, colors[BLACK]); // bottom right janay wali

    DrawLine(130, 150, 130, 750, 30, colors[BLACK]); // left upar janay wali

    DrawLine(130, 750, 830, 750, 30, colors[BLACK]); // upar right janay wali

    DrawRoundRect(180, 280, 100, 400, colors[YELLOW], 20);
    DrawRoundRect(680, 280, 100, 400, colors[YELLOW], 20);

    DrawString(210, 480, "BOT", colors[BLACK]);
    DrawString(705, 480, "Human", colors[BLACK]);

}

void Player::MouseClicked(int button, int state, int x, int y)
{

    if (button == GLUT_LEFT_BUTTON
       && ((x > 450 && x < 800) && (y > 170 && y < 260)) // play game function
        )                                                 // dealing only with left button
    {
        glutDisplayFunc(Menu::botOrhuman);
        glutSwapBuffers(); // do not modify this line..
    }
    else if (button == GLUT_LEFT_BUTTON && state == 0 && ((x > 450 && x < 800) && (y > 300 && y < 380))) //score button
    {
        glutDisplayFunc(Menu::ShowScores);
        glutSwapBuffers(); // do not modify this line..
    }
    else if (button == GLUT_LEFT_BUTTON && state == 0 && ((x > 899 && x < 1050) && (y > 170 && y < 450))) // human button
    {
        glutDisplayFunc(draw);
        glutSwapBuffers(); // do not modify this line..
    }
    else if (button == GLUT_LEFT_BUTTON && state == 0 && ((x > 230 && x < 380) && (y > 170 && y < 450))) // bot button
    {
        Player::bot = true;
        mapy = true;
        level = 0;
        glutDisplayFunc(draw);
        
        glutTimerFunc(100, Timer, 0);
        glutSwapBuffers(); // do not modify this line..
    }
    else if (button == GLUT_LEFT_BUTTON && ((x > 450 && x < 800) && (y > 460 && y < 550))  ) // EXIT function
    {
        exit(0);
    }

    else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
    {
        cout << "Right Button Pressed" << endl;
    }
    glutPostRedisplay();
}