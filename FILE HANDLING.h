#include"ACTUAL HEADER.h"
#include"util.h"

void Menu::writeIntoFile()
{ 
    // To write high score on to file

    int a, i = 0, b = 1, c = 1, index = 1;
    string SCORE = to_string(score);
    string SCORE1 = to_string(score1);
    int curline = 1;
    string line;
    char len[5];
    fstream fout;
    fout.open("HighScoreFile.txt"); //,ios::in|ios::out);
    ofstream fileout("temp.txt");
    bool once = true;
    bool oncemore = false;
    bool in = false;
    while (fout >> line)
    {

        if (once)
        {
            if (curline == 1 || curline == 3 || curline == 5 || curline == 7 || curline == 9)
            {
                if (SCORE > SCORE1)
                {
                    if (SCORE > line)
                    {
                        cout << "bla" << endl;
                        line = SCORE;
                        // line = "\n";
                        // line = Player::name;
                        once = false;
                        oncemore = true;
                    }
                }
                else
                {
                    if (SCORE1 > line)
                    {
                        cout << "bla1" << endl;
                        line = SCORE1;
                        // fout<<endl;
                        // line= "\n";
                        // line = Player::name;
                        once = false;
                        oncemore = true;
                    }
                }
            }
        }
        line += "\n";
        if (in)
        {
            in = false;
            fileout << "\n";
        }
        else
        {
            fileout << line;
        }
        if (oncemore)
        {

            fileout << Player::name;
            // fileout<<"\n";
            fout.ignore(256, '\n');
            oncemore = false;
            in = true;
        }

        i++;
        curline++;
        index++;
    }

    fout.close();
    fileout.close();
    remove("HighScoreFile.txt");
    rename("temp.txt", "HighScoreFile.txt");
}


void Menu::readFromFile()
{
    fstream fout;
    char len[750];
    string s;
    fout.open("HighScoreFile.txt", ios::in);
    int i = 0;

    int a, b, c, d, e;
    int index = 0;
    while (fout >> s)
    {
        // string str = to_string(a);

        DrawString(433, 650, "Top Scores", colors[MISTY_ROSE]);

        if (index == 0)
        {
            DrawString(445, 620, "Score: ", colors[MISTY_ROSE]);
            DrawString(500, 620, s, colors[MISTY_ROSE]);
        }
        else if (index == 1)
        {
            DrawString(445, 590, "Name: ", colors[MISTY_ROSE]);
            DrawString(500, 590, s, colors[MISTY_ROSE]);
        }
        else if (index == 2)
        {
            DrawString(445, 550, "Score: ", colors[MISTY_ROSE]);
            DrawString(500, 550, s, colors[MISTY_ROSE]);
        }
        else if (index == 3)
        {
            DrawString(445, 520, "Name: ", colors[MISTY_ROSE]);
            DrawString(500, 520, s, colors[MISTY_ROSE]);
        }
        else if (index == 4)
        {
            DrawString(445, 490, "Score: ", colors[MISTY_ROSE]);
            DrawString(500, 490, s, colors[MISTY_ROSE]);
        }
        else if (index == 5)
        {
            DrawString(445, 450, "Name: ", colors[MISTY_ROSE]);
            DrawString(500, 450, s, colors[MISTY_ROSE]);
        }
        else if (index == 6)
        {
            DrawString(445, 420, "Score: ", colors[MISTY_ROSE]);
            DrawString(500, 420, s, colors[MISTY_ROSE]);
        }
        else if (index == 7)
        {
            DrawString(445, 390, "Name: ", colors[MISTY_ROSE]);
            DrawString(500, 390, s, colors[MISTY_ROSE]);
        }
        else if (index == 8)
        {
            DrawString(445, 350, "Score: ", colors[MISTY_ROSE]);
            DrawString(500, 350, s, colors[MISTY_ROSE]);
        }
        else if (index == 9)
        {
            DrawString(445, 320, "Name: ", colors[MISTY_ROSE]);
            DrawString(500, 320, s, colors[MISTY_ROSE]);
        }
        else if (index == 10)
        {
            DrawString(445, 290, "Score: ", colors[MISTY_ROSE]);
            DrawString(500, 290, s, colors[MISTY_ROSE]);
        }
        index++;
    }
    glutPostRedisplay();

    fout.close();
}
