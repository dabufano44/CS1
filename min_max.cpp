// Program Assignment #7: Minimum/Maximum

// Danielle Bufano
// 9/15/17

#include <iostream>
using namespace std;

int main()
{
    int int1;
    int int2;
    
    cout << "Please enter two integers\n";
    cin >> int1 >> int2;
    
    if (int1 > int2)
        cout << int1 << " is larger than " <<int2 <<endl;
    else if (int2 > int1)
        cout << int2 << " is larger than " <<int1 <<endl;
    else if (int1 == int2)
        cout << int1 << " is equal to " << int2 <<endl;
    
    return 0;
}
