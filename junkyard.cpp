// Junkyard

// Danielle Bufano
// 11/21/17

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void heading();
string carmodel(int);
float carprice(int);

const string car1 = "AUDI";
const string car2 = "BMW";
const string car3 = "JAGUAR";
const string car4 = "LEXUS";

int main(){
    
    heading();
    
    ifstream inFile;
    int id;
    int numsales;
    int model;
    int count;
    float totalsold;
    int numsold = 0;
    float totalsales = 0;
    int numAudi = 0;
    int numJaguar = 0;
    int numLexus = 0;
    int numBmw = 0;
    int numSalesmen = 0;
    float overallTotalSales = 0;
    
    inFile.open("Junkyard.txt");
    
    while (!inFile.eof()){
        
        inFile >> id >> numsales;
        cout << id;
        
        for (int i = 0; i < numsales; i++)
        {
            inFile >> model >> count;
            totalsold = static_cast<double>(count)*carprice(model);
            if (i == 0)
            {
                cout << "    " << setw(8) << left << carmodel(model) << setw(2) << right << count << setw(12) << right << setprecision(2) << fixed << totalsold << endl;
                
            }
            else
            {
                cout << "        " << setw(8) << left << carmodel(model) << setw(2) << right << count << setw(12) << right << setprecision(2) << fixed << totalsold << endl;
                
            }
            if (model == 1)
                numAudi = numAudi + count;
            else if (model == 2)
                numBmw = numBmw + count;
            else if (model == 3)
                numJaguar = numJaguar + count;
            else if (model == 4)
                numLexus = numLexus + count;
            
            
            numsold = numsold + count;
            totalsales = totalsales + totalsold;
            overallTotalSales = overallTotalSales + totalsold;
        }
        
        cout << setw(30) << right << "- - - - - - - -" << endl;
        cout << setw(18) << numsold << setw(12) << setprecision(2) << fixed << totalsales << endl << endl;
        numsold = 0;
        totalsales = 0;
        numSalesmen++;
        
    }
    
    cout << "Overall Audi units sold: " << numAudi << endl;
    cout << "Overall BMW units sold: " << numBmw << endl;
    cout << "Overall Jaguar units sold: " << numJaguar << endl;
    cout << "Overall Lexus units sold: " << numLexus << endl << endl;
    
    cout << "Number salespersons: " << numSalesmen << endl;
    cout << "Overall $$ sold: $" << overallTotalSales << endl;
    cout << "Average $$ sold per salesperson: $" << overallTotalSales/numSalesmen << endl;
    
    
}



void heading(){
    
    cout << "Welcome to Luxury Junkyard, Inc. the end of month report" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
    cout << "CURRENT SELLING PRICES" << endl;
    cout << "- - - - - - - - - - - - - " << endl;
    cout << setw(8) << left << car1 << setw(8) << right << setprecision(2) << fixed << carprice(1) << endl;
    cout << setw(8) << left << car2 << setw(8) << right << setprecision(2) << fixed << carprice(2) << endl;
    cout << setw(8) << left << car3 << setw(8) << right << setprecision(2) << fixed << carprice(3) << endl;
    cout << setw(8) << left << car4 << setw(8) << right << setprecision(2) << fixed << carprice(4) << endl << endl;
    
}

string carmodel(int model){
    
    string carname;
    
    switch(model)
    {
        case 1: carname = car1;
            break;
        case 2: carname = car2;
            break;
        case 3: carname = car3;
            break;
        case 4: carname = car4;
            break;
    }
    return carname;
    
}

float carprice(int model){
    
    double price;
    
    switch(model)
    {
        case 1: price = 8876.50;
            break;
        case 2: price = 9909.89;
            break;
        case 3: price = 10999.99;
            break;
        case 4: price = 7776.69;
            break;
    }
    
    return price;
    
}


