// Lab 6.8

// Danielle Bufano
// 10/17/17

#include <iostream>
#include <iomanip>
using namespace std;

double dentistBill(double, double);
double dentistBill(double, double, double);

int main() {
    int member;
    double service;
    double test;
    double medicine;
    double total;
    
    cout << "Please input a one if you are a member of the dental plan. Input any other number if you are not" << endl;
    cin >> member;
    if (member == 1) {
        cout << "Please input the service charge" << endl;
        cin >> service;
        cout << "Please input the test charge" << endl;
        cin >> test;
        total = dentistBill(service, test);
    }
    else {
        cout << "Please input the service charge" << endl;
        cin >> service;
        cout << "Please input the test charge" << endl;
        cin >> test;
        cout << "Please input the medicine charges" << endl;
        cin >> medicine;
        total = dentistBill(service, test, medicine);
    }
    cout << "The total bill is $" << setprecision(2) << fixed << total << endl;
    
return 0;
        
}

double dentistBill(double service, double test){
    double total;
    total = service + test;
    return total;
}
double dentistBill(double service, double test, double medicine){
    double total;
    total = service + test + medicine;
    return total;
}






// Lab Assignment: Shopping Spree

// Danielle Bufano
// 10/17/17

/*How much money do you have to spend? $ 30
 Who do I have the pleasure of assisting today? Larry Well Larry that means you can afford:
 3. A key chain with a bath tub ornament, $14.00
 4. A boring old card, $3.99
 Please enter the item number you wish to purchase
 You spent $14.00, and have $16.00 left to spend!!
 Well Larry that means you can afford:
 3. A key chain with a bath tub ornament, $14.00
 4. A boring old card, $3.99
 Please enter the item number you wish to purchase
 Thank you for shopping with us today Larry, please come again! */

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
    
    cout << "How much money do you have to spend?" << endl << "$ ";
    cin >> money;
    if (money < 4) {
        cout << "You don't have enough money" << endl;
        return 0;
    }
    cout << "Who do I have the pleasure of assisting today? ";
    name = getName();
    cout << "Well, " << name << ", that means you can afford: " << endl;
    while (item != 0) {
        cout << "\n\nYou have $" <<money << " to spend" << endl;
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
    cout << "Goodbye" << endl;
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
        return -1;
    
    cout << "Select an item, or 0 to exit" ;
    cin >> item;
    if (item == 0)
        return item;
    if (item < afford){
        cout << "Invalid choice";
        return -1;
    }
    return item;
}

