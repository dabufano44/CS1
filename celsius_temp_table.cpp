// Programming Assignment: Celsius Temperature Table

// Danielle Bufano
// 10/3/17

#include <iostream>
#include <iomanip>
using namespace std;

double celsius(int fahrenheit);

int main()
{
    cout << "°C    °F" << endl;
    
    int fahrenheit;
    
    for (fahrenheit = 32; fahrenheit <= 212; fahrenheit += 10) {
        cout << right << setw(3) << fahrenheit << "   " << setprecision(2) << fixed << celsius(fahrenheit) << endl; }
    
}

double celsius(int fahrenheit)
{
    double temp;
    temp = (fahrenheit - 32) * static_cast<double>(5)/9;
    return temp;
}



    
    
    

