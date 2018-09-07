
// Danielle Bufano
// 10/31/17

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int longest_run(int [], int);

int main() {
    
    
    int tosses = 0;
    int array[tosses];
    
    cout << "Enter the amount of tosses: " << endl;
    cin >> tosses;
    
    if (tosses >= 1 && tosses <= 20) {
        for (int i = 0; i < tosses; i++)
            cout << left << setw(3) << i;
        cout << endl;
        
        srand(time(0));
        for (int i = 0; i < tosses; i++){
            array[i] = 1 + rand()%3;
            cout << array[i] << "  ";
        }
        cout << endl;
        
        cout << "The longest run occurs at index " << longest_run(array, tosses) << endl;
    }

    else {
        cout << "Enter a number between 1 and 20: " << endl;
        cin >> tosses;
        }
    }

        
int longest_run(int array[], int size){
    
    int count = 1;
    int longest_run = 0;
    int longest_index = 0;
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == array[i + 1])
            count++;
        else {
            count = 1;
            index = i + 1;
        }
        if (count > longest_run) {
            longest_run = count;
            longest_index = index;
            }
    
        }
    return longest_index;
        
}
