// Bank Account

// Danielle Bufano
// 12/5/17

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void Menu();

int main(){
    
    ifstream inFile;
    ofstream outFile;
    int id;
    float balance;
    string customer;
    char userChoice;
    float deposit;
    float withdrawl;
    
    inFile.open("accounts.old.txt");
    outFile.open("accounts.new.txt");
    
    if (!inFile){
        cout << "File open failure" << endl;
        return 0;
        }
    else
        cout << "File is open" << endl;
    
    
    while (!inFile.eof()){
        inFile >> id;
        if (id != 999999){
            inFile >> balance;
            inFile.ignore();
            getline(inFile, customer);
            
            bool closed = false;
        
            cout << id << setw(11) << setprecision(2) << fixed << balance << " " << customer << endl;
            Menu();
            cin >> userChoice;
        
            while (userChoice != 'a'){
                switch(userChoice){
                    case 'd':
                        cout << "Amount: ";
                        cin >> deposit;
                        balance = balance + deposit;
                        break;
                    case 'w':
                        cout << "Amount: ";
                        cin >> withdrawl;
                        balance = balance - withdrawl;
                        break;
                    case 'c':
                        if (balance == 0)
                            closed = true;
                        else {
                            cout << "Account cannot be closed unless balance is 0" << endl;
                            closed = false;
                            }
                        break;
                    default:
                        cout << "That choice is not valid" << endl;
                        break;
    
                }
                cin >> userChoice;
            }
            
            if (closed == false){
                outFile << id << setw(11) << setprecision(2) << fixed << balance << " " << customer;
            }
        
        }
    
    }
    cout << "End of file" << endl;
    
    inFile.close();
    

}

void Menu(){
    cout << "(d)eposit,   (w)ithdrawl,   (c)lose,   (a)dvance to next customer" << endl;
}

