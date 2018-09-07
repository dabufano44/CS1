// Sparse 2D Array

// Danielle Bufano
// 12/12/17

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct SparseArrayEntry{
    int row;
    int col;
    int value;
};

vector<SparseArrayEntry> SparseArray;

void showEntries();
int getValueAt(int, int);
void removeColumn(int);


int main(){
    
    SparseArrayEntry sparse1 = {1,4,4};
    SparseArrayEntry sparse2 = {2,0,1};
    SparseArrayEntry sparse3 = {3, 1, -9};
    SparseArrayEntry sparse4 = {1, 1, 5};
    
    SparseArray.push_back(sparse1);
    SparseArray.push_back(sparse2);
    SparseArray.push_back(sparse3);
    SparseArray.push_back(sparse4);
    
    showEntries();
    
    cout << endl;
    cout << "getValueAt(3,1): " << getValueAt(3,1) << endl;
    cout << "getValueAt(3,3): " << getValueAt(3,3) << endl;
    cout << "removeColumn(1): " << endl;
    
    removeColumn(1);
    showEntries();
}

void showEntries(){
    
    for(int i = 0; i < SparseArray.size(); i++){
        cout << "row: " << SparseArray[i].row << " col: " << SparseArray[i].col << " value: " << SparseArray[i].value << endl;
    }
    
}

int getValueAt(int Row, int Col){
    
    int value = 0;
    
    for (int i = 0; i < SparseArray.size(); i++){
        if (SparseArray[i].row == Row && SparseArray[i].col == Col)
            value = SparseArray[i].value;
    }
    
    return value;
}

void removeColumn(int Column){
    
    int repeat = 0;
    int remove = 1000;

    for (int i = 0; i < SparseArray.size(); i++)
    {
        if(SparseArray[i].col == Column)
        {
            SparseArray[i].col = remove;
            repeat++;
        }
        
    }
    
    for (int i = 0; i < SparseArray.size(); i++)
    {
        if(SparseArray[i].col == remove){
            SparseArray[i] = SparseArray[i + 1];
        }
    }
    
    for (int i = 0; i < repeat; i++)
        SparseArray.pop_back();
    
    
    for (int i = 0; i < SparseArray.size(); i++){
        if (SparseArray[i].col > Column){
            SparseArray[i].col = SparseArray[i].col - 1;
        }
    }
    
}


