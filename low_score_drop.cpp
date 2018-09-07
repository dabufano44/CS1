// Programming Assignment: Lowest Score Drop

// Danielle Bufano
// 10/9/17

#include <iostream>
#include <iomanip>
using namespace std;

void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main () {
    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
    int score4 = 0;
    int score5 = 0;
   
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    calcAverage(score1, score2, score3, score4, score5);
    
    
    }

void getScore(int &score) {
    cout << "Enter score: ";
    cin >> score;
    while (score < 0 || score > 100){
        cout << "Please enter a score between 0 and 100: ";
        cin >> score;
    }
}

void calcAverage(int score1, int score2, int score3, int score4, int score5) {
    
    int average;
    int lowScore;
    lowScore = findLowest(score1, score2, score3, score4, score5);
    average = (score1 + score2 + score3 + score4 + score5 - lowScore)/4;
    cout << "The average is " << average << endl;
}

int findLowest(int score1, int score2, int score3, int score4, int score5) {
    
    int lowScore;
    lowScore = score1;
    if ( score2 < lowScore && score2 < score3 && score2 < score4 && score2 < score5)
        lowScore = score2;
    else if (score3 < lowScore && score3 < score2 && score3 < score4 && score3 < score5)
        lowScore = score3;
    else if (score4 < lowScore && score4 < score2 && score4 < score3 && score4 < score5)
        lowScore = score4;
    else if (score5 < lowScore && score5 < score2 && score5 < score3 && score5 < score4)
        lowScore = score5;
    
    return lowScore;
    }

    
