// Lab Assignment: 2D Array Menu

// Danielle Bufano
// 11/4/17

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const int ROWS = 3;
const int COLS = 4;
typedef int ArrayType[ROWS][COLS];

void Menu();
void createArray(ArrayType&, int, int);
void findRowSum(ArrayType, int, int);
void findColSum(ArrayType, int, int);
void findTotalSum(ArrayType, int, int);
void rowLargestSum(ArrayType, int, int);
void colLargestSum(ArrayType, int, int);

int main() {

    int userNum;
    ArrayType array;
    
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            array[i][j] = 0;
        }
    }
    
    
    Menu();
    cin >> userNum;
    
    while (userNum != 7){
        switch(userNum){
            case 1: createArray(array, ROWS, COLS);
                break;
            case 2: findRowSum(array, ROWS, COLS);
                break;
            case 3: findColSum(array, ROWS, COLS);
                break;
            case 4: findTotalSum(array, ROWS, COLS);
                break;
            case 5: rowLargestSum(array, ROWS, COLS);
                break;
            case 6: colLargestSum(array, ROWS, COLS);
                break;
        }
    
        for (int i = 0; i < ROWS; i++){
            for (int j = 0; j < COLS; j++){
                cout << setw(3) << array[i][j];;
            }
            cout << endl;
        }
        
        Menu();
        cin >> userNum;
    }
    cout << "Goodbye!" << endl;
}

void Menu(){
    
    cout << "1. Create 2d array\n";
    cout << "2. Find row sum\n";
    cout << "3. Find col sum\n";
    cout << "4. Find total sum\n";
    cout << "5. Find row with largest sum\n";
    cout << "6. Find col with largest sum\n";
    cout << "7. Quit\n\n";
    cout << "Please select 1-7" << endl;
}

void createArray(ArrayType& array, int numRows, int numCols){
    
    srand(time(0));
    for (int i = 0; i < numRows; i++){
        for (int j = 0; j < numCols; j++){
            array[i][j] = 1 + rand()%10;
        }
    }
    cout << endl;
}

void findRowSum(ArrayType array, int numRows, int numCols){
    
    int userRow;
    int sum[numRows];
    int total;
    cout << "Enter row index, 0-2: ";
    cin >> userRow;
    for (int i = 0; i < numRows; i++){
        total = 0;
        for (int j = 0; j < numCols; j++){
            total += array[i][j];
        }
        sum[i] = total;
        
    }
    cout << "The sum of all row " << userRow << " numbers is " << sum[userRow] << endl << endl;
}

void findColSum(ArrayType array, int numRows, int numCols){
    
    int userCol;
    int sum[numCols];
    int total;
    cout << "Enter column index, 0-3: ";
    cin >> userCol;
    for (int j = 0; j < numCols; j++){
        total = 0;
        for (int i = 0; i < numRows; i++){
            total += array[i][j];
        }
        sum[j] = total;
        
    }
    cout << "The sum of all column " << userCol << " numbers is " << sum[userCol] << endl << endl;
}

void findTotalSum(ArrayType array, int numRows, int numCols){
    
    int total = 0;
    for (int i = 0; i < numRows; i++){
        for (int j = 0; j < numCols; j++){
            total += array[i][j];
        }
    }
    cout << "The total sum is " << total << endl << endl;
}

void rowLargestSum(ArrayType array, int numRows, int numCols){
    
    
    int sum[numRows];
    int total;
    for (int i = 0; i < numRows; i++){
        total = 0;
        for (int j = 0; j < numCols; j++){
            total += array[i][j];
        }
        sum[i] = total;
    }
    
    int largest = sum[0];
    int index = 0;
    for (int i = 1; i < numRows; i++){
        if (sum[i] > largest){
            largest = sum[i];
            index = i;
        }
    }
    cout << "Row " << index << " has the largest sum" << endl << endl;
}

void colLargestSum(ArrayType array, int numRows, int numCols){
    
    int sum[numCols];
    int total;
    for (int j = 0; j < numCols; j++){
        total = 0;
        for (int i = 0; i < numRows; i++){
            total += array[i][j];
        }
        sum[j] = total;
    }
    
    int largest = sum[0];
    int index = 0;
    for (int i = 0; i < numCols; i++){
        if (sum[i] > largest){
            largest = sum[i];
            index = i;
        }
    }
    cout << "Column " << index << " has the largest sum" << endl << endl;
    
}
