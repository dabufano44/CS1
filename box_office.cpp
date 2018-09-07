// Program Assignment #6: Box Office

// Danielle Bufano
// 9/12/17

#include <iostream>
#include <iomanip>
using namespace std;

const float ADULT_TIX = 6.00;
const float CHILD_TIX = 3.00;
int main() {
    
    string movieName;
    int numAdultTix;
    int numChildTix;
    float grossProfit;
    float distributer;
    float boxOffice;
    
    cout << "Please enter the name of the movie: " << endl;
    getline(cin, movieName);
    cout << "Please enter the amount of adult tickets sold: " << endl;
    cin >> numAdultTix;
    cout << "Please enter the number of child tickets sold: " << endl;
    cin >> numChildTix;
    
    grossProfit = (numAdultTix * ADULT_TIX) + (numChildTix * CHILD_TIX);
    boxOffice = grossProfit * .2;
    distributer = grossProfit - boxOffice;
    
    cout << "Movie Name: " << movieName << endl;
    cout << "Adult Tickets Sold: " << numAdultTix << endl;
    cout << "Child Tickets Sold: " << numChildTix << endl;
    cout << left << setw(28) << "Gross Box Office Profit: " << setprecision(2) << fixed << "$" <<grossProfit << endl;
    cout << left << setw(28) << "Amount Paid To Distributor: " << setprecision(2) << fixed << "$" <<distributer << endl;
    cout << left << setw(28) << "Net Box Office Profit: " << setprecision(2) << fixed << "$" << boxOffice << endl;
    
    
    return 0;
    
}
