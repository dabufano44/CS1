// Program Assignment: Restaurant Bill

// Danielle Bufano
// 9/7/17

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double meal = 50.00;
    double tax_rate = .08;
    double tax = 0;
    double tip_rate = .15;
    double tip = 0;
    double total = 0;
    std::cout<<std::fixed;
    std::cout<<std::setprecision(2);
    
    tax = meal * tax_rate;
    tip = (meal + tax) * tip_rate;
    total = meal + tax + tip;
    
    cout << "Meal = $ " << meal << endl;
    cout << "Tax = $ " << tax << endl;
    cout << "Tip = $ " << tip << endl;
    cout << "Total = $ " << total << endl;
    
    return 0;
}
