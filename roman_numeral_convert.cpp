// Lab Assignment: Roman Numeral Converter

// Danielle Bufano
// 10/17/17

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    const int NUM_NUMERALS = 10;
    string numerals[NUM_NUMERALS] = {"I", "II", "III", "IV", "V", "VI", "VII", "IIX", "IX", "X"};
    int user_num;
    
    cout << "Please enter a number between 1 and 10:" << endl;
    cin >> user_num;
    
    while (user_num != 0)
        if (user_num < 0 || user_num > 10) {
            cout << "Invalid choice. Please re-enter a number between 1 and 10:" << endl;
            cin >> user_num;
        }
        else {
            cout << "The roman numeral for " << user_num << " is " << numerals[user_num - 1] << endl;
            cout << "Please enter a number, or hit 0 to exit:" << endl;
            cin >> user_num;
        }
    
    cout << "Goodbye." << endl;
    
}
