// Program Assignment #3: Miles per Gallon

// Danielle Bufano
// 9/8/17


#include <iostream>
using namespace std;

int main()
{
    double tank_capacity;
    double total_miles;
    double mpg;
    
    cout << "Enter the number of gallons of gas the car can hold: ";
    cin >> tank_capacity;
    cout << "Enter the number of miles it can be driven on a full tank: ";
    cin >> total_miles;
    
    mpg = total_miles / tank_capacity;
    cout << "The number of miles per gallon the car gets = " << mpg << endl;
    
    
    return 0;
}

