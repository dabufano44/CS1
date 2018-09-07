// Program Assignment # 11: Rock Paper Scissors

// Danielle Bufnao
// 9/22/17

#include <iostream>
using namespace std;


const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;
int main() {
    srand(time(0));
    int compNum;
    int userNum;
    bool showResult = true;
    
    compNum = (rand()%3)+1;

    if (showResult = true)
        cout << compNum << endl;
    
    cout << "Please enter 1 for rock, 2 for paper, or 3 for scissors" << endl;
    cin >> userNum;
    
    if (compNum == ROCK && userNum == PAPER)
        cout << "The computer chose rock.\nPaper wraps rock, you win" << endl;
    else if (compNum == PAPER && userNum == ROCK)
        cout << "The computer chose paper.\nPaper wraps rock, computer wins" << endl;
    else if (compNum == ROCK && userNum == SCISSORS)
        cout << "The computer chose rock.\nRock smashes scissors, computer wins" << endl;
    else if (compNum == SCISSORS && userNum == ROCK)
        cout << "The computer chose scissors.\nRock smashes scissors, you win" << endl;
    else if (compNum == PAPER && userNum == SCISSORS)
        cout << "The computer chose paper.\nScissors cut paper, you win" << endl;
    else if (compNum == SCISSORS && userNum == PAPER)
        cout << "The computer chose scissors.\nScissors cut paper, computer wins" << endl;
    else if (compNum == userNum)
        cout << "It's a draw." << endl;
    else
        cout << "You have entered an invalid number" << endl;
    
    
    return 0;
}

        
    
    
    
    
    
    
    
    
    
