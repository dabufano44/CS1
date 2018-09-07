// Program Assignment #9: Math Tutor

// Danielle Bufano
// 9/19/17

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main ()
{
    srand(time(0));
    int num1 = 10 + rand()%40;
    int num2 = 10 + rand()%40;
    int userSum;
    int realSum;
    
    cout << "Add the following numbers" << endl;
    cout << setw(4) << num1 << endl << "+ " << num2 << endl << "————" << endl;
    cin >> userSum;
    
    realSum = num1 + num2;
    
    if (userSum == realSum)
        cout << "Congratulations! Your answer is correct" << endl;
    else
        cout << "I'm sorry, that is incorrect. The answer is " << realSum << endl;
    
    
    return 0;
}
