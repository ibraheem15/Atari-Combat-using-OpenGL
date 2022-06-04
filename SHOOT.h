/***********************
 **  Ibraheem Rehman  **
 **  SE-Q    21i-1102 **
 ***********************/
#include "ACTUAL HEADER.h"
#include "util.h"

void Player::shoot()
{
    if (Player::mapy)
    {
        if (xS < 1010 && flag2)
        {
            xS += 10;

            if (xS > 950 || ((xS > 230 && xS < 305) && (yS >= 235 && yS <= 300)) || ((xS > 430 && xS < 505) && (yS >= 235 && yS <= 300)) || ((xS > 650 && xS < 720) && (yS >= 235 && yS <= 300)) // bottom blocks
                || ((xS > 230 && xS < 305) && (yS >= 440 && yS <= 510)) || ((xS > 430 && xS < 505) && (yS >= 440 && yS <= 510)) || ((xS > 650 && xS < 720) && (yS >= 440 && yS <= 510))          // center blocks
                || ((xS > 230 && xS < 305) && (yS >= 633 && yS <= 705)) || ((xS > 430 && xS < 505) && (yS >= 633 && yS <= 705)) || ((xS > 650 && xS < 720) && (yS >= 633 && yS <= 705))          // top blocks
            )
            {
                Drawbullet = false;
                xS = xI;
                glClear(GL_COLOR_BUFFER_BIT); // Update the colors

                glutSwapBuffers();

                flag2 = true;
                // drawBullet();
            }
            if ((xS == x1 || (xS >= (x1 - 20) && xS <= (x1 + 20))) && (yS == y1 || (yS >= (y1 - 20) && yS <= (y1 + 60))))
            {
                Drawbullet = false;
                xS = xI;

                PlaySound("mixkit-retro-arcade-casino-notification-211.wav", NULL, SND_ASYNC);

                srand(time(0));

                x1 = getRandomIntExcludingRange(100, 850, 250, 700);
                y1 = 100 + (rand() % (750 - 100 + 1));

                Player::score1++;
                //cout<<"Score of Player 1: "<<score1<<endl;
                Progress::writeScore();

                glClear(GL_COLOR_BUFFER_BIT); // Update the colors
                glutDisplayFunc(draw);
                glutSwapBuffers();

                flag2 = true;
            }
            else
            {
                // Drawbullet = true;
            }
        }
        else if (xS > 10 && flag2)
        {
            xS -= 10;
            cout << "going left, ";
            if (xS < 100)

                flag2 = false;
        }
    }
    else
    {
        if (xS < 1010 && flag2)
        {
            xS += 10;

            if (xS > 950 || ((xS > 180 && xS < 400) && (yS > 365 && yS <= 510)) || ((xS > 575 && xS < 800) && (yS > 365 && yS <= 510)))

            {
                xS = xI;
                Drawbullet = false;
                glClear(GL_COLOR_BUFFER_BIT); // Update the colors
                glutDisplayFunc(draw);
                glutSwapBuffers();

                flag2 = true;
            }
            if ((xS == x1 || (xS >= (x1 - 20) && xS <= (x1 + 20))) && (yS == y1 || (yS >= (y1 - 20) && yS <= (y1 + 60))))
            {
                xS = xI;
                Drawbullet = false; //
                PlaySound("mixkit-retro-arcade-casino-notification-211.wav", NULL, SND_ASYNC);

                srand(time(0));
                x1 = 100 + (rand() % (850 - 100 + 1)); // getRandomIntExcludingRange(100, 850, 250, 700);
                y1 = getRandomIntExcludingRange(100, 750, 250, 600);

                score1++;
                Progress::writeScore();

                glClear(GL_COLOR_BUFFER_BIT); // Update the colors
                glutDisplayFunc(draw);
                glutSwapBuffers();

                flag2 = true;
            }
            else
            {
                // Drawbullet = true;
            }
        }
        else if (xS > 10 && flag2)
        {
            xS -= 10;
            cout << "going left, ";
            if (xS < 100)

                flag2 = false;
        }
    }
}

void Player::shoot1()
{
    if (mapy)
    {
        if (xB > 10 && flag3)
        {
            xB -= 10;
            if (xB < 100 || ((xB < 700 && xB > 640) && (yB >= 235 && yB <= 300)) || ((xB < 485 && xB > 430) && (yB >= 235 && yB <= 310)) || ((xB < 295 && xB > 230) && (yB >= 235 && yB <= 310)) || ((xB < 700 && xB > 640) && (yB >= 440 && yB <= 510)) || ((xB < 485 && xB > 430) && (yB >= 440 && yB <= 510)) || ((xB < 295 && xB > 230) && (yB >= 440 && yB <= 510)) || ((xB < 700 && xB > 640) && (yB >= 633 && yB <= 705)) || ((xB < 485 && xB > 430) && (yB >= 633 && yB <= 705)) || ((xB < 295 && xB > 230) && (yB >= 633 && yB <= 705)))
            {
                Drawbullet1 = false;
                flag3 = true;
                glClear(GL_COLOR_BUFFER_BIT); // Update the colors
                glutDisplayFunc(draw);

                glutSwapBuffers();
            }

            if ((xB == xI || (xB >= (xI - 20) && xB <= (xI + 20))) && (yB == yI || (yB >= (yI - 20) && yB <= (yI + 60))))
            {
                Drawbullet1 = false;
                PlaySound("mixkit-retro-arcade-casino-notification-211.wav", NULL, SND_ASYNC);

                glClear(GL_COLOR_BUFFER_BIT); // Update the colors

                srand(time(0));

                xI = getRandomIntExcludingRange(100, 850, 250, 700);
                yI = 100 + (rand() % (750 - 100 + 1));

                xB = 100;
                score++;
                Progress::writeScore();

                glClear(GL_COLOR_BUFFER_BIT); // Update the colors
                glutDisplayFunc(draw);
                glutSwapBuffers();
                flag3 = true;
            }
            else
            {
                // Drawbullet = true;
            }
        }
    }
    else
    {
        if (xB > 10 && flag3)
        {
            xB -= 10;

            if (xB < 50 || ((xB > 210 && xB < 455) && (yB >= 365 && yB <= 510)) || ((xB > 610 && xB < 860) && (yB >= 365 && yB <= 510)))

            {

                Drawbullet1 = false;
                glClear(GL_COLOR_BUFFER_BIT); // Update the colors
                glutDisplayFunc(draw);

                glutSwapBuffers();
                flag3 = true;
                // drawBullet();
            }

            if ((xB == xI || (xB >= (xI - 20) && xB <= (xI + 20))) && (yB == yI || (yB >= (yI - 20) && yB <= (yI + 60))))
            {
                Drawbullet1 = false;
                PlaySound("mixkit-retro-arcade-casino-notification-211.wav", NULL, SND_ASYNC);

                // glClear(GL_COLOR_BUFFER_BIT); // Update the colors

                srand(time(0));
                xI = 100 + (rand() % (850 - 100 + 1)); // getRandomIntExcludingRange(100, 850, 250, 700);
                yI = getRandomIntExcludingRange(100, 850, 250, 700);

                xB = 100;
                score++;
                Progress::writeScore();

                glClear(GL_COLOR_BUFFER_BIT); // Update the colors
                glutDisplayFunc(draw);
                glutSwapBuffers();
                flag3 = true;
            }
            else
            {
                // Drawbullet = true;
            }
        }
    }
}

void Player::shoot2()
{
    if (mapy)
    {
        if (xB > 10 && flag5)
        {
            xB -= 10;
            if (xB < 100 || ((xB < 700 && xB > 640) && (yB >= 235 && yB <= 300)) || ((xB < 485 && xB > 430) && (yB >= 235 && yB <= 310)) || ((xB < 295 && xB > 230) && (yB >= 235 && yB <= 310)) || ((xB < 700 && xB > 640) && (yB >= 440 && yB <= 510)) || ((xB < 485 && xB > 430) && (yB >= 440 && yB <= 510)) || ((xB < 295 && xB > 230) && (yB >= 440 && yB <= 510)) || ((xB < 700 && xB > 640) && (yB >= 633 && yB <= 705)) || ((xB < 485 && xB > 430) && (yB >= 633 && yB <= 705)) || ((xB < 295 && xB > 230) && (yB >= 633 && yB <= 705)))
            {
                Drawbullet2 = false;
                glClear(GL_COLOR_BUFFER_BIT); // Update the colors
                glutSwapBuffers();

                flag5 = true;
                // drawBullet();
            }

            if ((xB == xI || (xB >= (xI - 20) && xB <= (xI + 20))) && (yB == yI || (yB >= (yI - 20) && yB <= (yI + 60))))
            {
                Drawbullet2 = false;
                PlaySound("mixkit-retro-arcade-casino-notification-211.wav", NULL, SND_ASYNC);

                glClear(GL_COLOR_BUFFER_BIT); // Update the colors

                srand(time(0));
                xI = getRandomIntExcludingRange(100, 850, 250, 700);
                yI = 100 + (rand() % (750 - 100 + 1));

                xB = 100;
                glClear(GL_COLOR_BUFFER_BIT); // Update the colors
                score++;

                glutDisplayFunc(draw);
                glutSwapBuffers();
            }
            else
            {
                // Drawbullet = true;
            }
        }
    }
}

void Player::draw_bullet1()
{
    DrawCircle(xB, yB, 7, colors[RED]);
    glutPostRedisplay();
}
void Player::draw_bullet()
{
    DrawCircle(xS, yS, 7, colors[GOLD]);
    glutPostRedisplay();
}

void Player::AIshoot()
{
    Drawbullet2 = true;
    xB = x1 + 25;
    yB = y1 + 20;
    glutDisplayFunc(draw);
    glutSwapBuffers(); // do not modify this line..
}
