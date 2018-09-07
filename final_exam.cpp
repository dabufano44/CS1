// Final Exam

// Danielle Bufano
// 12/15/17

#include <iostream>
#include <iomanip>
#include <ctime>
#include <vector>
using namespace std;

const int SIZE = 52;
int cards[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26,
    27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
    40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52};
string suite[SIZE] = {"H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "C", "C",  "C",  "C",  "C",  "C",  "C",  "C",  "C",  "C",  "C",  "C",  "C", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S"};
string ranks[SIZE] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
int value[SIZE] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};

vector<int> currenthand;

void shuffle();
int getCard(int);
void showHand(vector<int>);
int score(vector<int>);
void showSummary(int, int, int);

int main() {
    
    char continueGame = 'y';
    char userkey;
    int die1;
    int die2;
    int index;
    int cardvalue;
    int total;
    int wins = 0;
    int loses = 0;
    int totalGames = 1;
    srand(time(0));
    
        cout << "Press any key and Enter to roll the dice: " << endl;
        cin >> userkey;
        while (isalpha(userkey)){
            shuffle();
            die1 = 1+ rand()%6;
            die2 = 1+ rand()%6;
            index = die1 + die2;
            
            cout << "You rolled: " << die1 << "+" << die2 << " = " << index << endl;
            cout << index << " random numbers:   ";
            for (int i = 0; i < index; i++){
                cardvalue = getCard(i);
                currenthand.push_back(cardvalue);
                cout << currenthand[i] << " ";
            }
            cout << "Your " << index << " cards and scores are: " << endl;
            showHand(currenthand);
            total = score(currenthand);
            cout << "Total: " << total << endl;
            
            int numAces = 0;
            int card;
            for (int i = 0; i < currenthand.size(); i++){
                card = currenthand[i];
                if (ranks[card - 1] == "A")
                    numAces++;
            }
            
            for (int i = 0; i < index; i++){
                currenthand.pop_back();
            }
            
            
            if (numAces == 3){
                cout << "You win -- Three aces!" << endl;
                wins++;
            }
            else if (numAces == 2){
                cout << "You lose -- Two aces!" << endl;
                loses++;
            }
            else {
                if (total > 0){
                    cout << "You win -- Positive score!" << endl;
                    wins++;
                }
                else{
                    cout << "You lose -- Negative score!" << endl;
                    loses++;
                }
            }
            cout << "Play again y/n? ";
            cin >> continueGame;
            if (continueGame == 'n'){
                showSummary(wins, loses, totalGames);
                return 0;
            }
            else if (continueGame == 'y'){
                totalGames++;
            }
            else{
                cout << "Please enter y or n" << endl;
                cin >> continueGame;
            }
            }

}
    
    void shuffle(){
        
        int temp;
        int r;
        srand(time(0));
        
        
        for (int i = 0; i < SIZE; i++){
            r = 1 + rand()%50;
            temp = cards[i];
            cards[i] = cards[r];
            cards[r] = temp;
            // cout << i << " " << cards[i] << " " << r << endl;
            
            //cout << cards[i] << " ";
        }
        
    }
    
    int getCard(int index){
        
        return (cards[index]);
        
    }
    
    void showHand(vector<int> currenthand){
        
        int cardvalue;
        for (int i = 0; i < currenthand.size(); i++){
            cardvalue = currenthand[i];
            cout << left << setw(3) << ranks[cardvalue - 1] << " " << suite[cardvalue - 1] << "   " << value[cardvalue - 1] << endl;
        }
        
    }
    
    int score(vector<int> currenthand){
        
        int total = 0;
        int cardvalue;
        for (int i = 0; i < currenthand.size(); i++){
            cardvalue = currenthand[i];
            total = total + value[cardvalue - 1];
        }
        return total;
    }
    
    void showSummary(int wins, int losses, int totalGames){
        
        cout << "Summary: " << totalGames << " game(s), " << wins << " win(s), " << losses << " loss(es)" << endl;
    }

