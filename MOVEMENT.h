#include"ACTUAL HEADER.h"
#include"util.h"


void Player::NonPrintableKeys(int key, int x, int y)
{
    if (mapy)
    {

        if (key == GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/)
        {
            // what to do when left key is pressed...
            if (xI > 50 && ((xI < 230 || xI > 305) || (yI < 200 || yI >= 310)) && ((xI < 230 || xI > 305) || (yI < 400 || yI >= 510)) && ((xI < 230 || xI > 305) || (yI < 600 || yI >= 710)) // left blocks
                && ((xI < 430 || xI > 505) || (yI < 200 || yI >= 310)) && ((xI < 430 || xI > 505) || (yI < 400 || yI >= 510)) && ((xI < 430 || xI > 505) || (yI < 600 || yI >= 710))         // center
                && ((xI < 650 || xI > 725) || (yI < 200 || yI >= 310)) && ((xI < 650 || xI > 725) || (yI < 400 || yI >= 510)) && ((xI < 650 || xI > 725) || (yI < 600 || yI >= 710)))        // right
                xI -= 10;
        }
        else if (key == GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/)
        {
            if (xI < 950 && ((xI < 210 || xI > 270) || (yI < 200 || yI >= 310)) && ((xI < 210 || xI > 270) || (yI < 400 || yI >= 510)) && ((xI < 210 || xI > 270) || (yI < 600 || yI >= 710)) // left blocks
                && ((xI < 410 || xI > 470) || (yI < 200 || yI >= 310)) && ((xI < 410 || xI > 470) || (yI < 400 || yI >= 510)) && ((xI < 410 || xI > 470) || (yI < 600 || yI >= 710))          // center
                && ((xI < 630 || xI > 690) || (yI < 200 || yI >= 310)) && ((xI < 630 || xI > 690) || (yI < 400 || yI >= 510)) && ((xI < 630 || xI > 690) || (yI < 600 || yI >= 710)))         // right
                xI += 10;
        }
        else if (key == GLUT_KEY_UP /*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/)
        {
            if (yI < 750 && ((xI < 220 || xI > 295) || (yI < 190 || yI >= 310)) && ((xI < 220 || xI > 295) || (yI < 390 || yI >= 510)) && ((xI < 220 || xI > 295) || (yI < 590 || yI >= 710)) // left blocks
                && ((xI < 420 || xI > 495) || (yI < 190 || yI >= 310)) && ((xI < 420 || xI > 495) || (yI < 390 || yI >= 510)) && ((xI < 420 || xI > 495) || (yI < 590 || yI >= 710))          // center
                && ((xI < 640 || xI > 715) || (yI < 190 || yI >= 310)) && ((xI < 640 || xI > 715) || (yI < 390 || yI >= 510)) && ((xI < 640 || xI > 715) || (yI < 590 || yI >= 710)))         // right
            {
                yI += 10;
            }
        }

        else if (key == GLUT_KEY_DOWN /*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/)
        {
            if (yI > 50 && ((xI < 220 || xI > 295) || (yI < 245 || yI >= 320)) && ((xI < 220 || xI > 295) || (yI < 445 || yI >= 520)) && ((xI < 220 || xI > 295) || (yI < 645 || yI >= 720)) && ((xI < 420 || xI > 495) || (yI < 245 || yI >= 320)) && ((xI < 420 || xI > 495) || (yI < 445 || yI >= 520)) && ((xI < 420 || xI > 495) || (yI < 645 || yI >= 720)) && ((xI < 640 || xI > 715) || (yI < 245 || yI >= 320)) && ((xI < 640 || xI > 715) || (yI < 445 || yI >= 520)) && ((xI < 640 || xI > 715) || (yI < 645 || yI >= 720)))
                yI -= 10;
        }
    }
    else
    {
        if (key == GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/)
        {
            // what to do when left key is pressed...
            if (xI > 50 && ((xI < 210 || xI > 460) || (yI < 325 || yI >= 520)) && ((xI < 610 || xI > 860) || (yI < 325 || yI >= 520)))
                xI -= 10;
        }
        else if (key == GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/)
        {
            if (xI < 950 && ((xI < 175 || xI > 400) || (yI < 325 || yI >= 520)) && ((xI < 575 || xI > 800) || (yI < 325 || yI >= 520)))
                xI += 10;
        }
        else if (key == GLUT_KEY_UP /*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/)
        {
            if (yI < 950 && ((xI < 180 || xI > 450 || (yI < 320 || yI >= 510))) && ((xI < 585 || xI > 850 || (yI < 320 || yI >= 510))))
            {
                yI += 10;
            }
        }
        else if (key == GLUT_KEY_DOWN /*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/)
        {
            if (yI > 50 && ((xI < 180 || xI > 450) || (yI < 350 || yI >= 530)) && ((xI < 585 || xI > 850) || (yI < 350 || yI >= 530)))
                yI -= 10;
        }
    }

    /* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
     * this function*/

    glutPostRedisplay();
}

void Player::PrintableKeys(unsigned char key, int x, int y)
{
    // cout<<"X:"<<x<<endl;
    if (mapy)
    {
        if (key == 27 /* Escape key ASCII*/)
        {
            exit(1); // ext the program when escape key is pressed.
        }
        else if (key == 119) // up w
        {
            if (y1 < 750 && ((x1 < 220 || x1 > 295) || (y1 < 190 || y1 >= 310)) && ((x1 < 220 || x1 > 295) || (y1 < 390 || y1 >= 510)) && ((x1 < 220 || x1 > 295) || (y1 < 590 || y1 >= 710)) // left blocks
                && ((x1 < 420 || x1 > 495) || (y1 < 190 || y1 >= 310)) && ((x1 < 420 || x1 > 495) || (y1 < 390 || y1 >= 510)) && ((x1 < 420 || x1 > 495) || (y1 < 590 || y1 >= 710))          // center
                && ((x1 < 640 || x1 > 715) || (y1 < 190 || y1 >= 310)) && ((x1 < 640 || x1 > 715) || (y1 < 390 || y1 >= 510)) && ((x1 < 640 || x1 > 715) || (y1 < 590 || y1 >= 710)))         // right

                y1 += 10;
        }
        else if (key == 115) // down s
        {
            if (y1 > 50 && ((x1 < 220 || x1 > 295) || (y1 < 245 || y1 >= 320)) && ((x1 < 220 || x1 > 295) || (y1 < 445 || y1 >= 520)) && ((x1 < 220 || x1 > 295) || (y1 < 645 || y1 >= 720)) && ((x1 < 420 || x1 > 495) || (y1 < 245 || y1 >= 320)) && ((x1 < 420 || x1 > 495) || (y1 < 445 || y1 >= 520)) && ((x1 < 420 || x1 > 495) || (y1 < 645 || y1 >= 720)) && ((x1 < 640 || x1 > 715) || (y1 < 245 || y1 >= 320)) && ((x1 < 640 || x1 > 715) || (y1 < 445 || y1 >= 520)) && ((x1 < 640 || x1 > 715) || (y1 < 645 || y1 >= 720)))
                y1 -= 10;
        }
        else if (key == 97) // left a
        {
            if (x1 > 50 && ((x1 < 230 || x1 > 305) || (y1 < 200 || y1 >= 310)) && ((x1 < 230 || x1 > 305) || (y1 < 400 || y1 >= 510)) && ((x1 < 230 || x1 > 305) || (y1 < 600 || y1 >= 710)) // left blocks
                && ((x1 < 430 || x1 > 505) || (y1 < 200 || y1 >= 310)) && ((x1 < 430 || x1 > 505) || (y1 < 400 || y1 >= 510)) && ((x1 < 430 || x1 > 505) || (y1 < 600 || y1 >= 710))         // center
                && ((x1 < 650 || x1 > 725) || (y1 < 200 || y1 >= 310)) && ((x1 < 650 || x1 > 725) || (y1 < 400 || y1 >= 510)) && ((x1 < 650 || x1 > 725) || (y1 < 600 || y1 >= 710)))        // right
                x1 -= 10;
        }
        else if (key == 100) // right d
        {
            if (x1 < 950 && ((x1 < 210 || x1 > 270) || (y1 < 200 || y1 >= 310)) && ((x1 < 210 || x1 > 270) || (y1 < 400 || y1 >= 510)) && ((x1 < 210 || x1 > 270) || (y1 < 600 || y1 >= 710)) // left blocks
                && ((x1 < 410 || x1 > 470) || (y1 < 200 || y1 >= 310)) && ((x1 < 410 || x1 > 470) || (y1 < 400 || y1 >= 510)) && ((x1 < 410 || x1 > 470) || (y1 < 600 || y1 >= 710))          // center
                && ((x1 < 630 || x1 > 690) || (y1 < 200 || y1 >= 310)) && ((x1 < 630 || x1 > 690) || (y1 < 400 || y1 >= 510)) && ((x1 < 630 || x1 > 690) || (y1 < 600 || y1 >= 710)))         // right
                x1 += 10;
        }
        else if (key == 121) // shoot left wala tank (y key)
        {
            Drawbullet = true;
            Drawbullet1 = false;
            xS = xI + 25;
            yS = yI + 20;
            glutDisplayFunc(draw);

            glutTimerFunc(100, Player::Timer2, 0);
            glutSwapBuffers(); // do not modify this line..
        }
        else if (key == 108) // right wla tank shoot (l key)
        {
            Drawbullet = false;
            Drawbullet1 = true;
            xB = x1 + 25;
            yB = y1 + 20;
            glutDisplayFunc(draw);

            glutTimerFunc(100, Player::Timer1, 0);
            glutSwapBuffers(); // do not modify this line..
        }
    }
    else
    {
        if (key == 27 /* Escape key ASCII*/)
        {
            exit(1); // exit the program when escape key is pressed.
        }
        else if (key == 119) // up w
        {
            if (y1 < 950 && ((x1 < 180 || x1 > 450 || (y1 < 320 || y1 >= 510))) && ((x1 < 565 || x1 > 850 || (y1 < 320 || y1 >= 510))))
            {
                y1 += 10;
            }
        }
        else if (key == 115) // down s
        {
            if (y1 > 50 && ((x1 < 180 || x1 > 450) || (y1 < 350 || y1 >= 530)) && ((x1 < 565 || x1 > 850) || (y1 < 350 || y1 >= 530)))
                y1 -= 10;
        }
        else if (key == 97) // left a
        {
            if (x1 > 50 && ((x1 < 210 || x1 > 455) || (y1 < 325 || y1 >= 520)) && ((x1 < 610 || x1 > 860) || (y1 < 325 || y1 >= 520)))
                x1 -= 10;
        }
        else if (key == 100) // right d
        {
            if (x1 < 950 && ((x1 < 180 || x1 > 400) || (y1 < 325 || y1 >= 520)) && ((x1 < 565 || x1 > 800) || (y1 < 325 || y1 >= 520)))
                x1 += 10;
        }
        else if (key == 121) // shoot left wala tank (y key)
        {
            Drawbullet = true;
            Drawbullet1 = false;
            xS = xI + 25;
            yS = yI + 20;
            glutDisplayFunc(draw);

            glutTimerFunc(100, Player::Timer2, 0);
            glutSwapBuffers(); // do not modify this line..
        }
        else if (key == 108) // right wla tank shoot (l key)
        {
            Drawbullet = false;
            Drawbullet1 = true;
            xB = x1 + 25;
            yB = y1 + 20;
            glutDisplayFunc(draw);

            glutTimerFunc(100, Player::Timer1, 0);
            glutSwapBuffers(); // do not modify this line..
        }
    }

    if (key == 'b' || key == 'B') // Key for placing the bomb
    {
        // do something if b is pressed
        cout << "b pressed" << endl;
    }
    glutPostRedisplay();
}

void Player::AImove()
{

    if ((x1 >= xI && (y1 == yI || (y1 >= (yI - 20) && y1 <= (yI + 60)))) && Drawbullet2 == false)
    {
        Drawbullet2 = true;
        AIshoot();
    }

    if (y1 == yI || (y1 >= (yI - 20) && y1 <= (yI + 60)))
    {
    }
    else
    {
        if (y1 < (yI + 20))
        {

            y1 += 4;
        }
        else
        {
            y1 -= 4;
        }
    }

    if (x1 > 10 && flag4 || (x1 > xI))
    {
        if (x1 < 100 || ((x1 < 730 && x1 > 640) && (y1 >= 205 && y1 <= 300)) || ((x1 < 510 && x1 > 430) && (y1 >= 205 && y1 <= 300)) || ((x1 < 320 && x1 > 200) && (y1 >= 205 && y1 <= 300)) //|| ((x1 < 330 && x1 > 200) && (y1 >= 205 && y1 <= 300))
            || ((x1 < 730 && x1 > 640) && (y1 >= 400 && y1 <= 510)) || ((x1 < 490 && x1 > 430) && (y1 >= 400 && y1 <= 510)) || ((x1 < 330 && x1 > 200) && (y1 >= 400 && y1 <= 510)) || ((x1 < 730 && x1 > 640) && (y1 >= 603 && y1 <= 705)) || ((x1 < 510 && x1 > 430) && (y1 >= 603 && y1 <= 705)) || ((x1 < 330 && x1 > 200) && (y1 >= 603 && y1 <= 705)))
        {
            y1 -= 20;
        }
        else
        {

            x1 -= 10;
            if (x1 < 100 || ((x1 < 690 && x1 > 640) && (y1 >= 205 && y1 <= 300)) || ((x1 < 510 && x1 > 430) && (y1 >= 205 && y1 <= 300)) || ((x1 < 320 && x1 > 200) && (y1 >= 205 && y1 <= 300)) || ((x1 < 690 && x1 > 640) && (y1 >= 400 && y1 <= 510)) || ((x1 < 510 && x1 > 430) && (y1 >= 400 && y1 <= 510)) || ((x1 < 320 && x1 > 200) && (y1 >= 400 && y1 <= 510)) || ((x1 < 690 && x1 > 640) && (y1 >= 603 && y1 <= 705)) || ((x1 < 510 && x1 > 430) && (y1 >= 603 && y1 <= 705)) || ((x1 < 320 && x1 > 200) && (y1 >= 603 && y1 <= 705)))
            {
                if (y1 < (yI + 20))
                {
                 
                    y1 += 20;
                }
                else
                {
                   
                    y1 -= 20;
                }
                flag4 = false;
            }
        }
    }
    else if (x1 < 1010 && !flag4 || (x1 < xI))
    {
        if (x1 > 950 || ((x1 > 200 && x1 < 310) && (y1 >= 235 && y1 <= 300)) || ((x1 > 400 && x1 < 505) && (y1 >= 235 && y1 <= 300)) || ((x1 > 600 && x1 < 690) && (y1 >= 235 && y1 <= 300)) // bottom blocks
            || ((x1 > 200 && x1 < 310) && (y1 >= 400 && y1 <= 510)) || ((x1 > 400 && x1 < 505) && (y1 >= 400 && y1 <= 510)) || ((x1 > 600 && x1 < 690) && (y1 >= 400 && y1 <= 510))          // center blocks
            || ((x1 > 200 && x1 < 310) && (y1 >= 633 && y1 <= 705)) || ((x1 > 400 && x1 < 505) && (y1 >= 633 && y1 <= 705)) || ((x1 > 600 && x1 < 690) && (y1 >= 633 && y1 <= 705))          // top blocks
        )
        {
            y += 4;
        }
        else
        {
            x1 += 10;
            // cout<<"xI: "<<xI<<endl;
            if (x1 > 950 || ((x1 > 200 && x1 < 330) && (y1 >= 235 && y1 <= 300)) || ((x1 > 400 && x1 < 505) && (y1 >= 235 && y1 <= 300)) || ((x1 > 600 && x1 < 690) && (y1 >= 235 && y1 <= 300)) // bottom blocks
                || ((x1 > 200 && x1 < 330) && (y1 >= 400 && y1 <= 510)) || ((x1 > 400 && x1 < 505) && (y1 >= 400 && y1 <= 510)) || ((x1 > 600 && x1 < 690) && (y1 >= 400 && y1 <= 510))          // center blocks
                || ((x1 > 200 && x1 < 330) && (y1 >= 633 && y1 <= 705)) || ((x1 > 400 && x1 < 505) && (y1 >= 633 && y1 <= 705)) || ((x1 > 600 && x1 < 690) && (y1 >= 633 && y1 <= 705))          // top blocks
            )
            {
                if (y1 < (yI + 20))
                {
                    // glutDisplayFunc(draw_bullet);
                    //  glutSwapBuffers(); // do not modify this line..

                    y1 += 20;
                    // flag4 = true;
                }
                else
                {
                    // glutDisplayFunc(draw_bullet);
                    //  glutSwapBuffers(); // do not modify this line..

                    y1 -= 20;
                    // flag4 = true;
                }
                flag4 = true;
            }
        }
    }
}


void Player::moveCar()
{
    if (x > 10 && flag)
    {
        x -= 10;
        cout << "going left, ";
        if (x < 100)
            flag = false;
    }
    else if (x < 1010 && flag)
    {
        cout << "go right, ";
        x += 10;
        if (x > 900)
            flag = false;
    }
}
