// Program Assignment #4: Average Rainfall

// Danielle Bufano
// 9/12/17

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string month1;
    string month2;
    string month3;
    float rainmonth1;
    float rainmonth2;
    float rainmonth3;
    float avg;
    
    cout << "Please enter a month and the total inches of rainfall during that month" <<endl;
    cin >> month1 >> rainmonth1;
    cout << "Please enter a second month and the total inches of rainfall during that month" <<endl;
    cin >> month2 >> rainmonth2;
    cout << "Please enter a third month and the total inches of rainfall during that month" <<endl;
    cin >> month3 >> rainmonth3;
    
    avg = (rainmonth1 + rainmonth2 + rainmonth3) / 3;
    
    cout << "The average monthly rainfall for " <<month1 << ", " <<month2 << ", and " <<month3 << " was " <<setprecision(2) <<fixed << avg <<endl;
    
    return 0;
}

