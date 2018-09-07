// Program Assignment # 10: Dollars for Change

// Danielle Bufano
// 9/19/17

#include <iostream>
using namespace std;

int main() {
    double amount;
    int dollars;
    int quarters;
    int dimes;
    int nickels;
    int cents;
    
    cout << "Enter an item's cost: ";
    cin >> amount;
    
    amount = static_cast<int>(amount * 100);
    
    dollars = amount / 100;
    quarters = (amount - (dollars * 100)) / 25 ;
    dimes = (amount - (dollars * 100) - (quarters * 25)) / 10;
    nickels = (amount - (dollars * 100) - (quarters * 25) - (dimes * 10)) / 5;
    cents = (amount - (dollars * 100) - (quarters * 25) - (dimes * 10) - (nickels * 5));
    
    
 
    cout << dollars << " dollars" << endl;
    cout << quarters << " quarters" << endl;
    cout << dimes << " dimes" << endl;
    cout << nickels << " nickels" << endl;
    cout << cents << " cents" << endl;
    
    
    return 0;
}
