// Lab Assignment: Shopping Spree

// Danielle Bufano
// 10/17/17

#include <iostream>
using namespace std;

string getName();
void displayItems(double);
void canAfford();
int getChoice(double);
void shopMore();

const double GIFTCARD = 50.00;
const double COLOGNE = 24.00;
const double KEYCHAIN = 14.00;
const double CARD = 4.00;

int main() {

    double money;
    string name;
    int item = -1;
    int total = 0;
    
    cout << "How much money do you have to spend?" << endl << "$ ";
    cin >> money;
    total = money;
    if (money < 4) {
        cout << "You don't have enough money." << endl;
        return 0;
    }
    cout << "Who do I have the pleasure of assisting today? ";
    name = getName();
    cout << "Well, " << name << ", here are your options: " << endl << endl;
  
    while (item != 0) {
    cout << "You have spent $" << total-money << " and have $" << money << " dollars left to spend." << endl;
    displayItems(money);
    item = getChoice(money);
        if (item == 1)
            money -= GIFTCARD;
        else if (item == 2)
            money -= COLOGNE;
        else if (item == 3)
            money -= KEYCHAIN;
        else if (item == 4)
            money -= CARD;
        else if (item != 0)
            cout << "Invalid choice" << endl;
    
    }
cout << "Thanks for shopping" << endl;
return 0;
    
}

string getName() {
    string name;
    cin >> name;
    return name;
}
void displayItems(double money){
    
    if (money >= GIFTCARD)
        cout << "1. Home Depot Giftcard, $" << GIFTCARD << endl;
    if (money >= COLOGNE)
        cout << "2. Bottle of Cologne $" << COLOGNE << endl;
    if (money >= KEYCHAIN)
        cout << "3. Keychain $" << KEYCHAIN << endl;
    if (money >= CARD)
        cout << "4. A Card $" << CARD << endl;
}
int getChoice(double money){
    int item;
    int afford = 0;
    if (money >= GIFTCARD)
        afford = 1;
    else if (money >= COLOGNE)
        afford = 2;
    else if (money >= KEYCHAIN)
        afford = 3;
    else if (money >= CARD)
        afford = 4;
    else
        return 0;
             
    cout << "Select an item, or 0 to exit " << endl;
    cin >> item;
    if (item == 0)
        return 0;
    if (item < afford){
        cout << "Invalid choice";
        return -1;
    }
    return item;
             }
             


