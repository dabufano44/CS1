// This program will determine the average of three grades

// Danielle Bufano
// 9/12/17

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float grade1, grade2, grade3;
    float avg;
    
    cout << "Please input grade 1" << endl;
    cin >> grade1;
    cout << "Please input grade 2" << endl;
    cin >> grade2;
    cout << "Please input grade 3" << endl;
    cin >> grade3;
    
    avg = (grade1 + grade2 + grade3) / 3;
    cout << "The average of the three grades is " << setprecision(2) << fixed << avg << endl;
    
    return 0;
}
