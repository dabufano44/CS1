// Program Assignment # 13: Random Number Guessing Game
// Danielle Bufnao
// 9/28/17

#include <iostream>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));
    int randNum = 1 + rand()%99;
    int userNum;
    
    cout << "Try to guess the correct number between 1 and 100" << endl;
    
    int i = 0;
    while (userNum != randNum) {
        cin >> userNum;
        if (userNum > randNum)
            cout << "Too high. try again." << endl;
        else if (userNum < randNum)
            cout << "Too low. try again." << endl;
        else
            cout << "Congratulations! You figured out my number!" << endl;
        i++;
    }
   
    cout << "It took you " << i << " guesses" << endl;
    
    return 0;
}
