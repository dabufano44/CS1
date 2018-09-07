// Programming Assignment: Markup

// Danielle Bufano
// 10/3/17

#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double cost, double markup);

int main()
{
    double cost;
    double markup;
    
    cout << "Please enter the item's wholesale cost: ";
    cin >> cost;
    cout << "Please enter the item's markup percentage: ";
    cin >> markup;
    
    if (cost > 0 && markup > 0) {
        cout << "Retail price is $"  << setprecision(2) << fixed << calculateRetail(cost, markup) << endl; }
    else
        cout << "Both numbers must be positive" << endl;
    
}

double calculateRetail(double cost, double markup)
{
        double retail;
        retail = cost + cost*(markup/100);
        return retail;
}





