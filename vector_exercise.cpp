// Vector Exercise

// Danielle Bufano
// 11/7/17

#include <iostream>
#include <vector>
using namespace std;

void Menu();
void fillVector(vector<int>&);
void clearVector(vector<int>&);
void printVector(vector<int>);
void reverseVector(vector<int>&);
int find(vector<int>, int);
void removeValue(vector<int>&);

int main(){
    
    vector<int> vect;
    int userChoice;
    
    Menu();
    cin >> userChoice;
    while (userChoice != 6){
        switch(userChoice){
            case 1: fillVector(vect);
                break;
            case 2: clearVector(vect);
                break;
            case 3: printVector(vect);
                break;
            case 4: reverseVector(vect);
                break;
            case 5: removeValue(vect);
                break;
        }
        Menu();
        cin >> userChoice;
    }
    cout << "Goodbye!" << endl;
}

void Menu(){
    
    cout << "1. fill Vector\n";
    cout << "2. clear Vector\n";
    cout << "3. print Vector\n";
    cout << "4. reverse Vector\n";
    cout << "5. remove Value\n";
    cout << "6. quit\n";
    
}

void fillVector(vector<int>& vect){
    
    int userNum;
    cout << "Enter +ve numbers separated by spaces and an -ve value to stop " << endl;
    while (cin >> userNum){
        if (userNum > 0)
            vect.push_back(userNum);
        else
            return;
    }
}

void clearVector(vector<int>& vect){
    
    vect.clear();
}

void printVector(vector<int> vect){
    
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";
    cout << endl;
    
}

void reverseVector(vector<int>& vect){
    
    int size = vect.size();
    vector<int> reverse(size);
    
    for (int i = 0; i < vect.size(); i++){
        reverse[i] = vect[vect.size()-1 - i];
        cout << reverse[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < vect.size(); i++){
        vect[i] = reverse[i];
    }
}

int find(vector<int> vect, int value){
    
    int index;
    bool found = false;
    for (int i = 0; i < vect.size(); i++){
        if (vect[i] == value){
            found = true;
            index = i;
        }
    }
    if (found == false)
        index = -1;
    return index;
}

void removeValue(vector<int>& vect){
    
    int index;
    int userVal;
    cout << "Enter value to remove: ";
    cin >> userVal;
    index = find(vect, userVal);
  
    if (index != -1){
        for (int i = index; i < (vect.size() - 1); i++){
        vect[i] = vect[i + 1];
        }
        vect.pop_back();
        cout << userVal << " found at index " << index << " removed" << endl;
    }
    else
        cout << userVal << " not found" << endl;
}


