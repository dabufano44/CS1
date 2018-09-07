// Lab 7.4

// Danielle Bufano
// 11/1/17

#include <iostream>
#include <iomanip>
using namespace std;


int countGrade(char, int , char []);
const int SIZE = 5;
char letterGrade[SIZE] = {'A', 'B', 'C', 'D', 'F'};
char grades[50];

int main(){

    int numGrades = 0;
    int gradeNumbersA = 0;
    int gradeNumbersB = 0;
    int gradeNumbersC = 0;
    int gradeNumbersD = 0;
    int gradeNumbersF = 0;

  
    
    cout << "Please input the number of grades to be read in (1-50)" << endl;
    cin >> numGrades;
    cout << "All grades must be uppercase A B C D or F" << endl;
    
    for (int i = 0; i < numGrades; i++){
        cout << "Input a grade" << endl;
        cin >> grades[i];
    }
    
    gradeNumbersA = countGrade('A', numGrades, grades);
    gradeNumbersB = countGrade('B', numGrades, grades);
    gradeNumbersC = countGrade('C', numGrades, grades);
    gradeNumbersD = countGrade('D', numGrades, grades);
    gradeNumbersF = countGrade('F', numGrades, grades);
    
    cout << "Number of A: " << gradeNumbersA << endl;
    cout << "Number of B: " << gradeNumbersB << endl;
    cout << "Number of C: " << gradeNumbersC << endl;
    cout << "Number of D: " << gradeNumbersD << endl;
    cout << "Number of F: " << gradeNumbersF << endl;
    
    return 0;
}
    
int countGrade(char letterCategory, int size, char array[]) {
    
        int total = 0;
        for (int i = 0; i < size; i++) {
            if (array[i] == letterCategory) {
                total++;
            }
        }
        return total;
    }




