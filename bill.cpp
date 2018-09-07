// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

// Danielle Bufano
// 9/12/17

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int	quantity;		// contains the amount of items purchased 
	float itemPrice;	// contains the price of each item
	float totalBill;	// contains the total bill.

	cout << setprecision(2) << fixed << showpoint;	// formatted output 
	cout << "Please input the number of items bought" << endl;
    cin >> quantity;
    cout << "Please input the price of each item" << endl;
    cin >> itemPrice;
    
    totalBill = quantity * itemPrice;
    cout << "The total bill is $" << totalBill << endl;

	return 0;
}

// Exercise 2
// Output becomes:
//     The total bill is $2.4e+02
// The <<fixed attribute ensures that all output values are displayed with exactly 2 decimal values. Without
// the <<fixed attribute, <<setprecision only determines the number of significant figures

// Exercise 3
// Output becomes:
//      The total bill is $241.5600
// The <<setprecision(4) attribute causes the output value to display 4 decimal places when used with the
// <<fixed attribute

