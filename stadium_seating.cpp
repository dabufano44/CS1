// Program Assignment #4: Stadium Seating

// Danielle Bufano
// 9/8/17


#include <iostream>
using namespace std;

int main()
{
    double class_a;
    double class_b;
    double class_c;
    double income;
    
    cout << "Enter the number of class A seats: ";
    cin >> class_a;
    cout << "Enter the number of class B seats: ";
    cin >> class_b;
    cout << "Enter the number of class C seats: ";
    cin >> class_c;
    
    income = 15*class_a + 12*class_b + 9*class_c;
    cout << "The amount of income generated from ticket sales = $" << income << endl;
    
    return 0;
}
