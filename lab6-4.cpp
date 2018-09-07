// Lab 6.4

// Danielle Bufano
// 10/6/17

#include <iostream>
#include <iomanip>
using namespace std;

void swap(int, int);

int main()
{
    int first;
    int second;
    
    cout << "Enter the first number\n" << "Then hit enter" << endl;
    cin >> first;
    cout << "Enter the second number\n" << "Then hit enter" << endl;
    cin >> second;
    
    cout << "You first entered the numbers as " << first << " and " << second << endl;
    swap(second, first);
    
    
    return 0;
}

void swap(int number1, int number2){

    cout << "After swapping, the first number has the value of " << number1 << " which was the value of the second number. The second number has the value of " << number2 << " which was the value of the first number" << endl;;
}

    
