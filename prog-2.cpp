// Program Assignment: Distance per Tank of Gas

// Danielle Bufano
// 9/7/17

#include <iostream>
using namespace std;

int main()
{
    double tank_capacity = 20;
    double mpg_town = 21.5;
    double mpg_highway = 26.8;
    double distance_town = 0;
    double distance_highway = 0;

    distance_town = tank_capacity * mpg_town;
    distance_highway = tank_capacity * mpg_highway;
    
    cout << "Tank capacity = " << tank_capacity << " gallons" << endl;
    cout << "Town miles per gallon = " << mpg_town << endl;
    cout << "Highway mile per gallon = " << mpg_highway << endl;
    cout << "Town distance = " << distance_town << " miles" << endl;
    cout << "Highway distance = " << distance_highway << " miles" << endl;
    
    return 0;
}
