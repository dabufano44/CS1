// Program Assignment #8: Roman Numeral Converter

// Danielle Bufano
// 9/15/17

#include <iostream>
using namespace std;

int main ()
{
    int number;
    string numeral;
    
    cout << "Please input an integer between 1 and 10" <<endl;
    cin >> number;
    
    if (number == 1)
    {
        numeral = "I";
        cout << "The roman numeral of " << number << " is " << numeral << endl;
    }
    else if (number == 2)
    {
        numeral = "II";
        cout << "The roman numeral of " << number << " is " << numeral << endl;
    }
    else if (number == 3)
    {
        numeral = "III";
        cout << "The roman numeral of " << number << " is " << numeral << endl;
    }
    else if (number == 4)
    {
        numeral = "IV";
        cout << "The roman numeral of " << number << " is " << numeral << endl;
    }
    else if (number == 5)
    {
        numeral = "V";
        cout << "The roman numeral of " << number << " is " << numeral << endl;
    }
    else if (number == 6)
    {
        numeral = "VI";
        cout << "The roman numeral of " << number << " is " << numeral << endl;
    }
    else if (number == 7)
    {
        numeral = "VII";
        cout << "The roman numeral of " << number << " is " << numeral << endl;
    }
    else if (number == 8)
    {
        numeral = "VIII";
        cout << "The roman numeral of " << number << " is " << numeral << endl;
    }
    else if (number == 9)
    {
        numeral = "IX";
        cout << "The roman numeral of " << number << " is " << numeral << endl;
    }
    else if (number == 10)
    {
        numeral = "X";
        cout << "The roman numeral of " << number << " is " << numeral << endl;
    }
    else
        cout << "Error: Number is not within range" << endl;
    
    
    return 0;
}
