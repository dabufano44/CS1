// Population

// Danielle Bufano
// 12/10/17

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    
    double pop1950;
    double pop1970;
    double pop1990;
    double pop2010;
    double pop2015;
    string country;
    
    ifstream inFile;
    
    inFile.open("population.csv");
    
    if (inFile)
    {
        while ( inFile >> pop1950)
        {
            inFile >> pop1970 >> pop1990 >> pop2010 >> pop2015;
            inFile.ignore();
            getline(inFile, country);
            
            cout << setprecision(3) << fixed << pop1950 << " " << pop2015 << " " << country << endl;
            
        }
        inFile.close();
    }
    else
        cout << "File open failure" << endl;
    
    return 0;
}
