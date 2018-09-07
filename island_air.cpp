// Island Air

// Danielle Bufano
// 11/14/17

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Seats {
    int seat;
    bool assigned;
    string name;
};
Seats passenger[6];

void menu();
void showSeats();
void assignSeats();
void deleteSeats();
void passengerList();

int main()
{
    int userNum;
    menu();
    cin >> userNum;
    while (userNum != 5){
        switch(userNum)
        {
            case 1:
                showSeats();
                break;
            case 2:
                assignSeats();
                break;
            case 3:
                deleteSeats();
                break;
            case 4:
                passengerList();
                break;
            default:
                cout << "You have entered an invalid number. Try again" << endl;
                menu();
                break;
        }
        menu();
        cin >> userNum;
    }
    cout << "bye bye" << endl;
}

void menu() {
    cout << "1. Show a list of empty seats\n";
    cout << "2. Assign a seat\n";
    cout << "3. Delete a seat assignment\n";
    cout << "4. Show passenger list\n";
    cout << "5. Quit\n";
    cout << "Please select 1-5" << endl;
}

void showSeats()
{
    
    for (int i = 0; i < 6; i++)
    {
        if (passenger[i].assigned == false)
        {
            passenger[i].seat = i+1;
            cout << passenger[i].seat << " ";
        }
        else
            cout << " - ";
    }
    cout << endl << endl;
}

void assignSeats(){
    
    int userSeat;
    int size = 0;
    for(int i = 0; i < 6; i++)
    {
        if(passenger[i].assigned == false){
            size++;
            passenger[i].seat = i + 1;
            cout << passenger[i].seat << " ";
        }
        else
            cout << " - ";
    }
    cout << endl;
    
    cout << "There are " << size << " empty seats" << endl;
    cout << "Enter seat number: ";
    cin >> userSeat;
    cout << "Enter passenger's name: ";
    cin.ignore();
    getline(cin, passenger[userSeat - 1].name);
    
    if (passenger[userSeat-1].assigned == true)
        cout << "This seat has already been assigned" << endl << endl;
    else {
        passenger[userSeat - 1].assigned = true;
        cout << "Seat " << userSeat << " assigned to " << passenger[userSeat - 1].name << endl << endl;
    }
}

void deleteSeats(){
    
    int userSeat;
    int size = 0;
    for(int i = 0; i < 6; i++)
    {
        if(passenger[i].assigned == false){
            size++;
            passenger[i].seat = i + 1;
            cout << passenger[i].seat << " ";
        }
        else
            cout << " - ";
    }
    cout << endl;
    
    cout << "There are " << size << " empty seats" << endl;
    cout << "Enter seat number: ";
    cin >> userSeat;
    
    if (passenger[userSeat - 1].assigned == false){
        cout << "Seat " << userSeat << " is not assigned" << endl << endl;
    }
    else{
        passenger[userSeat - 1].assigned = false;
        cout << "Seat " << userSeat << " was assigned to " << passenger[userSeat - 1].name << endl;
        cout << "Now seat " << userSeat << " is available" << endl << endl;
    }
}

void passengerList(){
    
    cout << setw(5) << left << "Seat" << setw(12) << left << "Name" << endl;
    for(int i = 0; i < 6; i++)
    {
        if(passenger[i].assigned == true)
        {
            cout << setw(5) << left << passenger[i].seat << setw(12) << left << passenger[i].name << endl;
        }
    }
    cout << endl;
    
}
