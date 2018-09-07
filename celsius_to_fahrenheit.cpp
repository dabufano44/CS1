// Program Assignment # 12: Celsius to Fahrenheit Table

// Danielle Bufnao
// 9/28/17


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    int i = 0;
    int celsius;
    double fahrenheit;

    for (i = 0; i <= 100; i = i+10) {
        celsius = i;
        fahrenheit = celsius * static_cast<double>(9)/5 + 32.0;
        cout << celsius << "°C = " << setprecision(2) << fixed << fahrenheit << "°F" << endl;
    }
    
    return 0;
}
