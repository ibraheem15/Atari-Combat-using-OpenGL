/***********************
 **  Ibraheem Rehman  **
 **  SE-Q    21i-1102 **
 ***********************/
#include "ACTUAL HEADER.h"
#include "util.h"

void Progress::writeScore()
{
    fstream fout;
    fout.open("Pro.txt"); //, ios::in | ios::out);
    ofstream fileout("temp.txt");
    string line;
    string SCORE = to_string(score);
    string SCORE1 = to_string(score1);
    int curline = 1;
    int bla;
    while (fout >> line)
    {
        if (curline == 1)
        {
            // cout << Player::score << endl;
            line = SCORE1;
            // cout << "bla" << endl;
        }
        else if (curline == 2)
        {
            // cout << Player::score1 << endl;
            line = SCORE;
            // cout << "bla1" << endl;
        }
        line += "\n";
        fileout << line;

        curline++;
    }
    fout.close();
    fileout.close();
    remove("Pro.txt");
    rename("temp.txt", "Pro.txt");
}
void Progress::readScore()
{
    fstream fout;
    fout.open("Pro.txt", ios::in | ios::out);
    string line;
    int curline = 1;
    while (fout >> line)
    {
        if (curline == 1)
        {
            Player::score = stoi(line);
        }
        else if (curline == 2)
            Player::score1 = stoi(line);
        curline++;
    }
    fout.close();
}