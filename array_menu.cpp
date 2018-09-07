

// Lab Assignment: Array Menu

// Danielle Bufano
// 10/24/17

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Menu();
void createArray(int [], int&);
void highLowSum(int [], int);
void addNumber(int [], int&);
void findIndex(int [], int);
void insertNumber(int [], int&);
void removeNumber(int [], int&);
void removeIndex(int [], int&);

int main() {
    
    int userNum;
    int SIZE = 100;
    int array[SIZE];
    
    for (int count = 0; count < SIZE; count++)
        array[count] = 0;
    
    Menu();
    cin >> userNum;
    
    while (userNum != 7){
        switch(userNum){
            case 0: createArray(array, SIZE);
                break;
            case 1: highLowSum(array, SIZE);
                break;
            case 2: addNumber(array, SIZE);
                break;
            case 3: findIndex(array, SIZE);
                break;
            case 4: insertNumber(array, SIZE);
                break;
            case 5: removeNumber(array, SIZE);
                break;
            case 6: removeIndex(array,SIZE);
                break;
        }
        Menu();
        cin >> userNum;
    }
    cout << "Goodbye" << endl << endl;
}

void Menu(){
    cout << "0. Create array" << endl;
    cout << "1. Find high, low, sum average" << endl;
    cout << "2. Add a number to the end" << endl;
    cout << "3. Find the index of a number" << endl;
    cout << "4. Insert number at index" << endl;
    cout << "5. Remove number" << endl;
    cout << "6. Remove number at index" << endl;
    cout << "7. Quit" << endl;
}

void createArray(int array[], int& SIZE){
    int length;
    srand(time(0));
    cout << "Enter the length of the array: ";
    cin >> length;
    if (length > 0 && length < 100){
        for (int index = 0; index < length; index++) {
            array[index] = 1 + rand()%99;
            cout << array[index] << " ";
        }
    }
    else{
        cout << "Enter a number between 1 and 99";
        cin >> length;
    }
    SIZE = length;
    cout << endl << endl;
}

void highLowSum(int array[], int length){
    for (int index = 0; index < length; index ++)
        cout << array[index] << " ";
    cout << endl << endl;
    
    
    
    int largest = array[0];
    for (int index = 0; index < length; index++){
        if (array[index] > largest)
            largest = array[index];
    }
    cout << "Highest number is: " << largest << endl;
    
    int lowest = array[0];
    for (int index = 0; index < length; index++) {
        if (array[index] < lowest)
            lowest = array[index];
    }
    cout << "Lowest number is: " << lowest << endl;
    
    double sum = 0;
    double avg = 0;
    for (int index = 0; index < length; index++) {
        sum = sum + array[index];
        avg = sum / length;
    }
    cout << "The average is: " << avg << endl << endl;
    
}

void addNumber(int array[], int& SIZE){
    SIZE = SIZE + 1;
    int newNum;
    cout << "Enter a number to add: ";
    cin >> newNum;
    array[SIZE - 1] = newNum;
    for (int index = 0; index < SIZE; index++)
        cout << array[index] << " ";
    cout << endl << endl;
}

void findIndex(int array[], int SIZE){
    int userNum;
    cout << "Enter the number to find: ";
    cin >> userNum;
    bool found = false;
    for (int i = 0; i < SIZE; i++){
        if (array[i] == userNum){
            cout << userNum << " is at index " << i << endl << endl;
            found = true;
        }
        
    }
    if (found == false)
        cout << userNum << " does not exist" << endl << endl;
}

void insertNumber(int array[], int& SIZE){
    int userNum;
    int userIndex;
    cout << "Enter the number to insert: ";
    cin >> userNum;
    cout << "Enter the index to insert: ";
    cin >> userIndex;
    if (userIndex < SIZE){
        for(int index = SIZE; index > userIndex; index--)
            {
                array[index]=array[index - 1];
            }
  
            array[userIndex]=userNum;
            SIZE = SIZE + 1;
        for (int index = 0; index < SIZE; index ++)
            cout << array[index] << " ";
        cout << endl << endl;
    }
    else
        cout << "The specified index is outside the array" << endl << endl;
    
}

void removeNumber(int array[], int& SIZE){

    int userNum;
    cout << "Enter the number to remove: ";
    cin >> userNum;
    bool found = false;
    for (int i = 0; i < SIZE; i++){
        if (array[i] == userNum) {
            for (int index = i; index < SIZE; index++){
                array[index] = array[index + 1];
            }
            SIZE = SIZE - 1;
            for (int index = 0; index < SIZE; index ++)
                cout << array[index] << " ";
            cout << endl << endl;
            found = true;
        }
        if (found == false)
        cout << userNum << " does not exist" << endl << endl;
    }
}

void removeIndex(int array[], int& SIZE){
    
    int userIndex;
    cout << "Enter the index to remove: ";
    cin >> userIndex;
    if (userIndex < SIZE){
        for (int i = 0; i < SIZE; i++){
            if (array[i] == array[userIndex]) {
                for (int index = i; index < SIZE; index++){
                    array[index] = array[index + 1];
                }
                SIZE = SIZE - 1;
                for (int index = 0; index < SIZE; index ++)
                    cout << array[index] << " ";
            }
        }
        cout << endl << endl;
    }
    else
        cout << userIndex << " is outside the array." << endl << endl;
}


