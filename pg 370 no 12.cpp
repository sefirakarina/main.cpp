#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <ctime>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <algorithm> 
#include <array>

using namespace std;

static int nJudgeOne;
static int nJudgeTwo;
static int nJudgeThree;
static int nJudgeFour;
static int nJudgeFive;
int nLow;
int nHigh;
int nFinalScore;
int nJudgeScores [] = {nJudgeOne, nJudgeTwo, nJudgeThree, nJudgeFour, nJudgeFive};
int nArrayLength = sizeof(nJudgeScores) / sizeof(nJudgeScores[0]);

void getJudgeData ()
{
    cout << "Please input the scores for the contestant" << endl;
    for (int a = 0; a < nArrayLength; a++)
    {
        cout << "Judge " << a + 1 << "'s score: ";
        cin >> nJudgeScores [a];
        if(nJudgeScores [a] < 0 || nJudgeScores [a] > 10)
        {
            cout << "Exiting program";
            return;
        }
    }
}

int findHighest ()
{
    int nHighestValue = 0;
    for(int i = 0; i < nArrayLength; i++)
    {
        if(nHighestValue < nJudgeScores [i])
        {
            nHighestValue = nJudgeScores [i];
        }
    }
    cout << "The highest value is " << nHighestValue << endl;
    return nHighestValue;
}
    
int findLowest ()
{
    int nLowestValue = nJudgeScores [0];
    for(int x = 0; x < nArrayLength; x++)
    {
        if(nLowestValue > nJudgeScores [x])
        {
            nLowestValue = nJudgeScores [x];
        }
    }
    
cout << "The lowest value is " << nLowestValue << endl;
    return nLowestValue;
}

void calcScore ()
{
    nLow = findLowest ();
    nHigh = findHighest ();
    nFinalScore = (nHigh + nLow) / 2;
    cout << "The contestant's final score is " << nFinalScore << endl;
    return;
}

int main ()
{
    getJudgeData ();
    calcScore ();
    return 0;
}



