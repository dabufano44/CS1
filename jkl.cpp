

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
void addNumber(int [], int);
void findIndex(int [], int);

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
        }
        cout << SIZE << endl;
        Menu();
        cin >> userNum;
    }
    cout << "Goodbye";
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

void addNumber(int array[], int SIZE){
    SIZE = SIZE + 1;
    int newNum;
    cout << "Enter a number to add: ";
    cin >> newNum;
    array[SIZE] = newNum;
    for (int index = 0; index < SIZE; index++)
        cout << array[SIZE] << " ";
    cout << endl << endl;
}

void findIndex(int array[], int length){
    cout << "hi" << endl;
}





// Lab Assignment: Array Menu

// Danielle Bufano
// 10/24/17

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    int SIZE = 5;
    int array[SIZE];
    
    for (int i = 0; i < SIZE; i++){
        array[i] = i + 3;
        cout << array[i] << " ";
    }
    cout << endl << endl;
    
    array[SIZE] = 9;
    for (int i = 0; i <= SIZE; i++)
        cout << array[i] << " ";
    
    return 0;
    
    
    
    
}








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
        }
        Menu();
        cin >> userNum;
    }
    cout << "Goodbye";
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
    for (int i = 0; i < SIZE; i++){
        if (array[i] == userNum)
            cout << userNum << " is at index " << i << endl;
        else
            for (int i = 0; i < SIZE; i++)
                array
                cout << "invalid" << endl;
        
    }
    
}

// Danielle Bufano
// 10/31/17

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    
    
    int tosses = 0;
    int index[tosses];
    
    cout << "Enter the amount of tosses: " << endl;
    cin >> tosses;
    
    if (tosses >= 1 && tosses <= 20) {
        for (int i = 0; i < tosses; i++)
            cout << left << setw(3) << i;
        cout << endl;
        
        srand(time(0));
        for (int i = 0; i < tosses; i++){
            index[i] = 1 + rand()%3;
            cout << index[i] << "  ";
        }
        cout << endl;
        
        int count;
        int longest_run = 0;
        int longest_index = 0;
        for (int i = 0; i < tosses; i++) {
            if (index[i] == index[i + 1]) {
                count++;
                if (count > longest_run) {
                    longest_run = count;
                    longest_index = i - 1;
                }
            }
            else
                count = 1;
        }
        cout << "The longest run occurs at index " << longest_index << endl;
    }
    
    else {
        cout << "Enter a number between 1 and 20: " << endl;
        cin >> tosses;
    }
    
    
    
    
    
}

// Danielle Bufano
// 10/31/17

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    
    
    int tosses = 0;
    int index[tosses];
    
    cout << "Enter the amount of tosses: " << endl;
    cin >> tosses;
    
    if (tosses >= 1 && tosses <= 20) {
        for (int i = 0; i < tosses; i++)
            cout << left << setw(3) << i;
        cout << endl;
        
        srand(time(0));
        for (int i = 0; i < tosses; i++){
            index[i] = 1 + rand()%3;
            cout << index[i] << "  ";
        }
        cout << endl;
        
        int count;
        int longest_run = 0;
        int longest_index = 0;
        for (int i = 0; i < tosses; i++) {
            if (index[i] == index[i + 1]) {
                count++;
                if (count > longest_run) {
                    longest_run = count;
                    longest_index = i - 1;
                }
            }
            else
                count = 1;
        }
        cout << "The longest run occurs at index " << longest_index << endl;
    }
    
    else {
        cout << "Enter a number between 1 and 20: " << endl;
        cin >> tosses;
    }
    
    
    int temp;
    temp = vect[i];
    vect[i] = vect[vect.size() - i];
    vect[vect.size() - i] = temp;
    
    
}



// Vector Exercise

// Danielle Bufano
// 11/7/17

#include <iostream>
#include <vector>
using namespace std;

void Menu();
void fillVector(vector<int>&);
void printVector(vector<int>);
void reverseVector(vector<int>&);
void find(vector<int>);

int main(){
    
    vector<int> vect;
    int userChoice;
    
    Menu();
    cin >> userChoice;
    while (userChoice != 6){
        switch(userChoice){
            case 1: fillVector(vect);
                break;
            case 2: printVector(vect);
                break;
            case 3: reverseVector(vect);
                break;
            case 4: find(vect);
                break;
        }
        Menu();
        cin >> userChoice;
    }
    
    
    
}

void Menu(){
    
    cout << "1. fill Vector\n";
    cout << "2. printVector\n";
    cout << "3. reverse Vector\n";
    cout << "4. find\n";
    cout << "5. remove Index\n";
    cout << "6. remove Value\n";
    cout << "7. quit\n";
    
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

void printVector(vector<int> vect){
    
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";
    cout << endl;
    
}

void reverseVector(vector<int>& vect){
    
    int size = vect.size();
    vector<int> reverse(size);
    
    for (int i = 1; i <= vect.size(); i++){
        reverse[i] = vect[vect.size()- i];
        cout << reverse[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < vect.size(); i++){
        cout << reverse[i];
        vect[i] = reverse[i];
        cout << vect[i] << " ";
    }
    cout << endl;
}

void find(vector<int> vect){
    
    int findNum;
    int i = 0;
    cout << "enter a value to find the index " << endl;
    cin >> findNum;
    
    cout << "hi";
}


#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Seats {
    int seat;
    bool assigned;
    string name;
};

void menu();
void showSeats();
void assignSeats();
const int SIZE =  6;
Seats passenger[SIZE];

int main()
{
    
    int userNum;
    
    menu();
    cin >> userNum;
    
    while (userNum != 7){
        switch(userNum){
            case 1:
                showSeats();
                break;
            case 2:
                assignSeats();
                break;
                
        }
        
        menu();
        cin >> userNum;
    }
    cout << "Goodbye!" << endl;
}

void Menu(){
    
    cout << "1. Show a list of empty seats\n";
    cout << "2. Assign a seat\n";
    cout << "3. Delete a seat assignment\n";
    cout << "4. Show passenger list\n";
    cout << "5. Quit\n";
    cout << "Please select 1-5" << endl;
}

void showSeats()
{
    for (int i = 0; i < SIZE; i++)
    {
        passenger[i].seat = i;
    }
    cout << endl;
}

void assignSeats()
{
    int userSeat, size1 = 0;
    for(int i = 0; i < 6; i++)
    {
        if(passenger[i].assigned == false)
            size1++;
    }
    cout << "There are " << size1 << " empty seats" << endl;
    cout << "Enter seat number: ";
    cin >> userSeat;
    cout << "Enter passenger's name: ";
    cin.ignore();
    getline(cin, passenger[userSeat].name);
}


// Island Air

// Danielle Bufano
// 11/14/17

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct TimeInterval{
    int start;
    int end;
};

struct Appointment{
    TimeInterval time;
    bool emergency;
};

bool overlapsWith(TimeInterval);
bool conflictsWith(Appointment);
bool addAppointment(Appointment);

vector<Appointment> DailySchedule(8);

int main() {
    Appointment a1{2, 5, false};
    Appointment a2{6, 8, false};
    Appointment a3{10, 12, false};
    Appointment a4{1, 4, false};
    Appointment a5{3, 6, false};
    Appointment a6{1, 6, false};
    Appointment b1{7, 9, false};
    Appointment b2{3, 4, true};
    
}

bool overlapsWith(TimeInterval current, TimeInterval other){
    
    if ((current.start <= other.start && current.end >= other.end) || (current.start >= other.start && current.end > other.end)){
        return true;
    }
    else
        return false;
    
}

bool addAppointment(Appointment appt){
    
    for (int i = appt.time; i <= 0; i--)
        bool overlap = overlapsWith(appt.time);
    
}

bool addAppointment(Appointment appt){
    
    bool addit = true;
    
    for (int i = 0; i < DailySchedule.size(); i++)
    {
        if (overlapsWith(appt.time, DailySchedule[i].time))
            addit = false;
        else
        {
            addit = true;
            DailySchedule[i] = appt;
        }
    }
    
    return addit;
    
}


// Appointment Scheduling

// Danielle Bufano
// 11/14/17

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct TimeInterval{
    int start;
    int end;
};

struct Appointment{
    TimeInterval time;
    bool emergency;
};

bool overlapsWith(TimeInterval, TimeInterval);
bool conflictsWith(Appointment, TimeInterval);
bool addAppointment(Appointment);

vector<Appointment> DailySchedule(8);

int main() {
    
    Appointment a1{2, 5, false};
    Appointment a2{6, 8, false};
    Appointment a3{10, 12, false};
    Appointment a4{1, 4, false};
    Appointment a5{3, 6, false};
    Appointment a6{1, 6, false};
    Appointment b1{7, 9, false};
    Appointment b2{3, 4, true};
    
    
    cout <<" add a1 returns " << addAppointment(a1) << endl;
    cout <<" add a2 returns " << addAppointment(a2) << endl;
    cout <<" add a3 returns " << addAppointment(a3) << endl;
    cout <<" add a4 returns " << addAppointment(a4) << endl;
    cout <<" add a5 returns " << addAppointment(a5) << endl;
    cout <<" add a6 returns " << addAppointment(a6) << endl;
    cout <<" add b1 returns " << addAppointment(b1) << endl;
    cout <<" add b2 returns " << addAppointment(b2) << endl;
    
    
}

bool overlapsWith(TimeInterval current, TimeInterval other){
    
    if (other.end > current.start && other.end < current.end)
        return true;
    else if (other.start < current.start && other.end > current.start)
        return true;
    else if (other.start < current.end && other.end > current.end)
        return true;
    else
        return false;
}

bool addAppointment(Appointment appt){
    
    bool addit = true;
    
    for (int i = 0; i < DailySchedule.size(); i++)
    {
        if (overlapsWith(appt.time, DailySchedule[i].time))
            addit = false;
        else
        {
            addit = true;
            DailySchedule.push_back(appt);
        }
    }
    
    return addit;
    
}


/
// Appointment Scheduling

// Danielle Bufano
// 11/14/17

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct TimeInterval{
    int start;
    int end;
};

struct Appointment{
    TimeInterval time;
    bool emergency;
};

bool overlapsWith(TimeInterval, TimeInterval);
bool conflictsWith(Appointment, TimeInterval);
bool addAppointment(Appointment);
void clearConflicts(Appointment);


vector<Appointment> DailySchedule;

int main() {
    
    Appointment a1{2, 5, false};
    Appointment a2{6, 8, false};
    Appointment a3{10, 12, false};
    Appointment a4{1, 4, false};
    Appointment a5{3, 6, false};
    Appointment a6{1, 6, false};
    Appointment b1{7, 9, false};
    Appointment b2{3, 4, true};
    
    
    cout <<" add a1 returns " << addAppointment(a1) << endl;
    cout <<" add a2 returns " << addAppointment(a2) << endl;
    cout <<" add a3 returns " << addAppointment(a3) << endl;
    cout <<" add a4 returns " << addAppointment(a4) << endl;
    cout <<" add a5 returns " << addAppointment(a5) << endl;
    cout <<" add a6 returns " << addAppointment(a6) << endl;
    cout <<" add b1 returns " << addAppointment(b1) << endl;
    cout <<" add b2 returns " << addAppointment(b2) << endl;
    
    for (int i = 0; i < DailySchedule.size(); i++)
        cout << DailySchedule[i].time.start << " " << DailySchedule[i].time.end << endl;
    
}

bool overlapsWith(TimeInterval current, TimeInterval other){
    
    if (other.start <= current.start && other.end >= current.start)
        return true;
    else if (other.start <= current.end && other.end >= current.end)
        return true;
    else if (other.start >= current.start && other.end <= current.end)
        return true;
    else if (other.start <= current.start && other.end >= current.end)
        return true;
    else
        return false;
    
}


bool addAppointment(Appointment appt){
    
    bool addit = true;
    
    for (int i = 0; i < DailySchedule.size(); i++)
    {
        bool overlaps;
        overlaps = overlapsWith(appt.time, DailySchedule[i].time);
        if (overlaps)
            addit = false;
    }
    
    if (appt.emergency == true)
    {
        clearConflicts(appt);
    }
    
    if (addit)
        DailySchedule.push_back(appt);
    
    return addit;
    
}

void clearConflicts(Appointment emergencyappt){
    
    //for (int i = 0; i < overlaps.size(); i++)
    //   for (int index = 0; index < (DailySchedule.size() - 1); index++)
    //      DailySchedule[index] = DailySchedule[index + 1];
    
    cout << endl;
    for (int i = 0; i < DailySchedule.size(); i++)
        cout << i << " " << DailySchedule[i].time.start << " " << DailySchedule[i].time.end << endl;
    cout << endl;
    
    int index = 0;
    for (int i = 0; i < DailySchedule.size(); i++)
    {
        if (overlapsWith(emergencyappt.time, DailySchedule[i].time))
        {
            
            index = i;
            cout << index << " hi" << endl;
        }
    }
    for (int i = index; i < (DailySchedule.size()-1); i++)
    {
        cout << DailySchedule.size() << endl;
        DailySchedule[index] = DailySchedule[index + 1];
    }
    DailySchedule.pop_back();
    
    for (int i = 0; i < DailySchedule.size(); i++)
        cout << i << " " << DailySchedule[i].time.start << " " << DailySchedule[i].time.end << endl;
    cout << endl << endl;
    
    DailySchedule.push_back(emergencyappt);
    
}
// Junkyard

// Danielle Bufano
// 11/21/17

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void heading();
string carmodel(int);
float carprice(int);

const string car1 = "AUDI";
const string car2 = "BMW";
const string car3 = "JAGUAR";
const string car4 = "LEXUS";

int main(){
    
    heading();
    
    ifstream inFile;
    int id;
    int models;
    int model;
    int count;
    float totalsold;
    int numsold = 0;
    float totalsales = 0;
    
    inFile.open("Junkyard.txt");
    
    while (!inFile.eof()){
        
        inFile >> id >> models;
        cout << id;
        for (int i = 0; i < models; i++){
            inFile >> model >> count;
            totalsold = count*carprice(model);
            if (i == 0)
            {
                cout << "    " << setw(8) << left << carmodel(model) << setw(2) << right << count << setw(12) << right << setprecision(2) << fixed << totalsold << endl;
            }
            else
            {
                cout << "        " << setw(8) << left << carmodel(model) << setw(2) << right << count << setw(12) << right << setprecision(2) << fixed << totalsold << endl;
            }
         //  id = 0
         //  while (id + 1 != id)
                //numsold = numsold + count, etc
            
            numsold = numsold + count;
            totalsales = totalsales + totalsold;
        }
        cout << setw(30) << right << "- - - - - - - -" << endl;
        cout << setw(18) << numsold << setw(12) << setprecision(2) << fixed << totalsales << endl << endl;
    }
    
    
    
}

void heading(){
    
    cout << "Welcome to Luxury Junkyard, Inc. the end of month report" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
    cout << "CURRENT SELLING PRICES" << endl;
    cout << "- - - - - - - - - - - - - " << endl;
    cout << setw(8) << left << car1 << setw(8) << right << setprecision(2) << fixed << carprice(1) << endl;
    cout << setw(8) << left << car2 << setw(8) << right << setprecision(2) << fixed << carprice(2) << endl;
    cout << setw(8) << left << car3 << setw(8) << right << setprecision(2) << fixed << carprice(3) << endl;
    cout << setw(8) << left << car4 << setw(8) << right << setprecision(2) << fixed << carprice(4) << endl;
    
}

string carmodel(int model){
    
    string carname;
    
    switch(model)
    {
        case 1: carname = car1;
            break;
        case 2: carname = car2;
            break;
        case 3: carname = car3;
            break;
        case 4: carname = car4;
            break;
    }
    return carname;
    
}

float carprice(int model){
    
    int price;
    
    switch(model)
    {
        case 1: price = 8876.50;
            break;
        case 2: price = 9909.89;
            break;
        case 3: price = 10999.99;
            break;
        case 4: price = 7776.69;
            break;
    }
    
    return price;
    
}


void clearConflicts(Appointment emergencyappt){
    
    //for (int i = 0; i < overlaps.size(); i++)
    //   for (int index = 0; index < (DailySchedule.size() - 1); index++)
    //      DailySchedule[index] = DailySchedule[index + 1];
    
    cout << endl;
    for (int i = 0; i < DailySchedule.size(); i++)
        cout << i << " " << DailySchedule[i].time.start << " " << DailySchedule[i].time.end << endl;
    cout << endl;
    
    int index = 0;
    for (int i = 0; i < DailySchedule.size(); i++)
    {
        if (overlapsWith(emergencyappt.time, DailySchedule[i].time))
        {
            
            index = i;
            cout << index << " hi" << endl;
        }
    }
    for (int i = index; i < (DailySchedule.size()-1); i++)
    {
        DailySchedule[i] = DailySchedule[i + 1];
    }
    DailySchedule.pop_back();
    
    for (int i = 0; i < DailySchedule.size(); i++)
        cout << DailySchedule[i].time.start << " " << DailySchedule[i].time.end << endl;
    cout << endl << endl;
    
    
}


void clearConflicts(Appointment emergencyappt){
    
    cout << endl;
    for (int i = 0; i < DailySchedule.size(); i++)
        cout << i << " " << DailySchedule[i].time.start << " " << DailySchedule[i].time.end << endl;
    cout << endl;
    
    vector<int> conflicts;
    int index;
    int i = 0;
    
    while (i < DailySchedule.size()){
        if (overlapsWith(emergencyappt.time, DailySchedule[i].time))
        {
            conflicts.push_back(i);
            cout << conflicts.at(i) << " hi" << endl;
            i = 0;
            continue;
        }
        else
            i++;
    }
    
    for(i = 0; i < conflicts.size(); i++){
        for (index = (conflicts.at(i) - i); index < (DailySchedule.size()-1); index++)
        {
            DailySchedule[index] = DailySchedule[index + 1];
        }
        DailySchedule.pop_back();
    }
    
    for (int i = 0; i < DailySchedule.size(); i++)
        cout << DailySchedule[i].time.start << " " << DailySchedule[i].time.end << endl;
    cout << endl << endl;
    
    
}



while (i < DailySchedule.size()){
    cout << i << "yo" << endl;
    if (overlapsWith(emergencyappt.time, DailySchedule[i].time)){
        cout << i << " yoooo" << endl;
        conflicts.push_back(i);
        cout << conflicts.at(i) << " hi" << endl;
        i++;
    }
    else
    i++;
    
    }

    // Appointment Scheduling
    
    // Danielle Bufano
    // 11/14/17
    
#include <iostream>
#include <vector>
#include <iomanip>
    
    using namespace std;
    
    struct TimeInterval{
        int start;
        int end;
    };
    
    struct Appointment{
        TimeInterval time;
        bool emergency;
    };
    
    bool overlapsWith(TimeInterval, TimeInterval);
    bool conflictsWith(Appointment, TimeInterval);
    bool addAppointment(Appointment);
    void clearConflicts(Appointment);
    
    
    vector<Appointment> DailySchedule;
    
    int main() {
        
        Appointment a1{2, 5, false};
        Appointment a2{6, 8, false};
        Appointment a3{10, 12, false};
        Appointment a4{13, 14, false};
        Appointment a5{3, 6, false};
        Appointment a6{1, 6, false};
        Appointment b1{7, 9, true};
        Appointment b2{3, 4, true};
        
        
        cout <<" add a1 returns " << addAppointment(a1) << endl;
        cout <<" add a2 returns " << addAppointment(a2) << endl;
        cout <<" add a3 returns " << addAppointment(a3) << endl;
        cout <<" add a4 returns " << addAppointment(a4) << endl;
        cout <<" add a5 returns " << addAppointment(a5) << endl;
        cout <<" add a6 returns " << addAppointment(a6) << endl;
        cout <<" add b1 returns " << addAppointment(b1) << endl;
        cout <<" add b2 returns " << addAppointment(b2) << endl;
        
        for (int i = 0; i < DailySchedule.size(); i++)
            cout << DailySchedule[i].time.start << " " << DailySchedule[i].time.end << endl;
        
    }
    
    bool overlapsWith(TimeInterval current, TimeInterval other){
        
        if (other.start <= current.start && other.end >= current.start)
            return true;
        else if (other.start <= current.end && other.end >= current.end)
            return true;
        else if (other.start >= current.start && other.end <= current.end)
            return true;
        else if (other.start <= current.start && other.end >= current.end)
            return true;
        else
            return false;
        
    }
    
    
    bool addAppointment(Appointment appt){
        
        bool addit = true;
        
        for (int i = 0; i < DailySchedule.size(); i++)
        {
            bool overlaps;
            overlaps = overlapsWith(appt.time, DailySchedule[i].time);
            if (overlaps)
                addit = false;
        }
        
        if (appt.emergency == true)
        {
            clearConflicts(appt);
            addit = true;
        }
        
        if (addit)
            DailySchedule.push_back(appt);
        
        return addit;
        
    }
    
    void clearConflicts(Appointment emergencyappt){
        
        cout << endl;
        for (int i = 0; i < DailySchedule.size(); i++)
            cout << DailySchedule[i].time.start << " " << DailySchedule[i].time.end << endl;
        cout << endl;
        
        vector<int> conflicts;
        int index;
        int i = 0;
        bool conflicting = false;
        
        while (i < DailySchedule.size())
        {
            conflicting = overlapsWith(emergencyappt.time, DailySchedule[i].time);
            switch (conflicting)
            {
                case true: conflicts.push_back(i);
                    i++;
                    break;
                case false: i++;
                    break;
            }
        }
        
        for(i = 0; i < conflicts.size(); i++){
            for (index = (conflicts.at(i) - i); index < (DailySchedule.size()-1); index++)
            {
                DailySchedule[index] = DailySchedule[index + 1];
            }
            DailySchedule.pop_back();
        }
        
        for (int i = 0; i < DailySchedule.size(); i++)
            cout << DailySchedule[i].time.start << " " << DailySchedule[i].time.end << endl;
        cout << endl << endl;
        
        
    }
    
    
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
        bool closed = false;
        
        inFile.open("accounts.old.txt");
        outFile.open("accounts.new.txt");
        
        if (!inFile){
            cout << "File open failure" << endl;
            return 0;
        }
        else
            cout << "File is open" << endl;
        
        
        while (!inFile.eof())
        {
            inFile >> id;
            if (id != 999999)
            {
                inFile >> balance;
                inFile.ignore();
                getline(inFile, customer);
                
                cout << id << setw(11) << setprecision(2) << fixed << balance << " " << customer << endl;
                Menu();
                cout << "hello" << endl;
                cin >> userChoice;
                
                while (userChoice != 'a')
                {
                    switch(userChoice)
                    {
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
                    
                    
                }
                cout << "closed" << closed << endl;
                if (closed == false)
                {
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
        
        removeColumn(3);
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
        
        for (int i = 0; i < SparseArray.size(); i++){
            if (SparseArray[i].col == Column){
                SparseArray[i] = SparseArray[i + 1];
            }
            SparseArray.pop_back();
        }
        
        for (int i = 0; i < SparseArray.size(); i++){
            if (SparseArray[i].col > Column){
                SparseArray[i].col = SparseArray[i].col - 1;
            }
        }
        
    }
    
    
    
    // Final Exam
    
    // Danielle Bufano
    // 12/15/17
    
#include <iostream>
#include <iomanip>
#include <ctime>
#include <vector>
    using namespace std;
    
    const int SIZE = 52;
    int cards[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
        14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26,
        27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
        40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52};
    string suite[SIZE] = {"H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "H", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "C", "C",  "C",  "C",  "C",  "C",  "C",  "C",  "C",  "C",  "C",  "C",  "C", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S", "S"};
    string ranks[SIZE] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    int value[SIZE] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};
    
    vector<int> currenthand;
    
    void shuffle();
    int getCard(int);
    void showHand(vector<int>);
    int score(vector<int>);
    void showSummary(int, int, int);
    
    int main() {
        
        char continueGame = 'y';
        char userkey;
        int die1;
        int die2;
        int index;
        int cardvalue;
        int total;
        int wins = 0;
        int loses = 0;
        int totalGames = 0;
        
        do {
            shuffle();
            cout << "Press any key and Enter to roll the dice: " << endl;
            cin >> userkey;
            while (isalpha(userkey)){
                srand(time(0));
                die1 = 1+ rand()%6;
                die2 = 1+ rand()%6;
                index = die1 + die2;
                
                cout << "You rolled: " << die1 << "+" << die2 << " = " << index << endl;
                cout << index << " random numbers:   ";
                for (int i = 0; i < index; i++){
                    cardvalue = getCard(i);
                    currenthand.push_back(cardvalue);
                    cout << currenthand[i] << " ";
                }
                cout << "Your " << index << " cards and scores are: " << endl;
                showHand(currenthand);
                total = score(currenthand);
                cout << "Total: " << total << endl;
                
                int numAces = 0;
                int card;
                for (int i = 0; i < currenthand.size(); i++){
                    card = currenthand[i];
                    if (ranks[card] == "A")
                        numAces++;
                }
                
                
                if (numAces == 3){
                    cout << "You win -- Three aces!" << endl;
                    wins++;
                }
                else if (numAces == 2){
                    cout << "You lose -- Two aces!" << endl;
                    loses++;
                }
                else {
                    if (total > 0){
                        cout << "You win -- Positive score!" << endl;
                        wins++;
                    }
                    else{
                        cout << "You lose -- Negative score!" << endl;
                        loses++;
                    }
                }
                cout << "Play again y/n?";
                cin >> continueGame;
                totalGames++;
                
            }
            while (continueGame == 'y');
            
            showSummary(wins, loses,totalGames);
            
        }
        
        void shuffle(){
            
            int temp;
            int r;
            srand(time(0));
            
            
            for (int i = 0; i < SIZE; i++){
                r = 1 + rand()%51;
                temp = cards[i];
                cards[i] = cards[r];
                cards[r] = temp;
                // cout << i << " " << cards[i] << " " << r << endl;
                
                //cout << cards[i] << " ";
            }
            
        }
        
        int getCard(int index){
            
            return cards[index];
            
        }
        
        void showHand(vector<int> currenthand){
            
            int cardvalue;
            for (int i = 0; i < currenthand.size(); i++){
                cardvalue = currenthand[i];
                cout << left << setw(3) << ranks[cardvalue] << " " << suite[cardvalue] << "   " << value[cardvalue] << endl;
            }
            
        }
        
        int score(vector<int> currenthand){
            
            int total = 0;
            int cardvalue;
            for (int i = 0; i < currenthand.size(); i++){
                cardvalue = currenthand[i];
                total = total + value[cardvalue];
            }
            return total;
        }
        
        void showSummary(int wins, int losses, int totalGames){
            
            cout << "Summary: " << totalGames << " game(s), " << wins << " win(s), " << losses << " loss(es)" << endl;
        }
        
        
        
        
#ifndef Student_H
#define Student_H
        using namespace std;
        
        class Student{
        private:
            int studentId;
            string firstName;
            string lastName;
            string fullName;
            char middleInitial;
            int monthBirth;
            int dateBirth;
            int yearBirth;
            int Birthday;
            string studentGender;
        public:
            Student();
            void setId(int studentId);
            void setName(string firstName, char middleInitial, string lastName);
            void setBirthday(int monthBirth, int dateBirth, int yearBirth);
            void setGender(string gender);
            int getId()
            {return studentId;}
            int getBirthday()
            {return Birthday;}
            string getName()
            {return fullName;}
            string getGender()
            {return studentGender;}
            void display();
            
        };
        
#endif
        
        
        
#include <iostream>
#include <cstdlib>
#include "Student.h"
        using namespace std;
        
        Student::Student(){
            studentId = 0;
            firstName = "n/a"
            lastName = "n/a"
            middleInitial = '*'
            monthBirth = 0;
            dayBirth = 0;
            yearBirth = 0;
        }
        
        Student::Student(string first, char initial, string last, int month, int day, int year)
        {
            firstName = first;
            middleInitial = initial;
            lastName = last;
            monthBirth = month;
            dayBirth = day;
            yearBirth = year;
        }
        
        void Student::setId(int idNum)
        {
            studentId = idNum
        }
        
        void Student::setName(string first, string last, char initial)
        {
            firstName = first;
            lastName = last;
            if (isalpha(initial)
                middileInitial = initial;
                else
                "Initial must be a letter" << endl;
                fullName = first + " " + middleInitial + " " + last;
                }
                
                void Student::setBirthday(int month, int day, int year)
            {
                if (month > 0 && month < 13)
                    monthBirth = month;
                else
                    "Month must be between 1 and 12" << endl;
                if (day > 0 && day < 32)
                    dayBirth = day;
                else
                    "Day must be between 1 and 31" << endl;
                if (year > 1990 && year < 2000)
                    yearBirth = year;
                else
                    "Year must be between 1990 and 2000" << endl;
                
            }
                
                void Student::setGender(string gender)
            {
                if (gender == "Male")
                    studentGender = "Male";
                if (gender == "Female")
                    studentGender = "Female";
                else
                    cout << "Must enter \"Male\" or \"Female\"" << endl;
            }
                
                void Student::display()
            {
                cout << "ID: " << getId();
                cout << "Full name: " <<
            }


                
                
                // Student Lab
                
                // Danielle Bufano
                // 2/8/18
                
#include <iostream>
#include <cstdlib>
#include <string>
#include "Name.h"
                using namespace std;
                
                int main(){
                    
                    Name student1Name;
                    
                    student1Name.setFname("John");
                    student1Name.setMname("M.");
                    student1Name.setLname("Smith");
                    
                    
                    student1Name.displayName();
                    cout << endl;
                    
                    return 0;
                }
                
                // Danielle Bufano
                // 2/12/18
                
#ifndef Name_H
#define Name_H
#include <string>
                using namespace std;
                
                class Name{
                private:
                    string firstName;
                    string middleInitial;
                    string lastName;
                public:
                    Name();
                    Name(string, string, string);
                    void setFname(string);
                    void setMname(string);
                    void setLname(string);
                    string getFullName()
                    {return firstName + " " + middleInitial + " " + lastName;}
                    void displayName();
                };
            
#endif
            
                // Danielle Bufano
                // 2/12/18
                
#include <iostream>
#include <cstdlib>
#include <string>
#include "Name.h"
                using namespace std;
                
                Name::Name()
            {
                firstName = " ";
                middleInitial = " ";
                lastName = " ";
            }
                
                Name::Name(string fname, string mname, string lname)
            {
                firstName = fname;
                middleInitial = mname;
                lastName = lname;
            }
                
                void Name::setFname(string fname)
            {
                firstName = fname;
            }
                
                void Name::setMname(string mname)
            {
                middleInitial = mname;
            }
                
                void Name::displayName()
            {
                cout << getFullName() << endl;
            }


                
                Set set8;
                set8 = set1 + set2;
                cout << "Union with overload ";
                set8.display();
                
                Set set9;
                set9 = set1 ^ set2;
                cout << "intersection with overload ";
                set9.display();
                
                Set set10;
                cout << "difference with overload ";
                set10 = set1 - set2;
                set10.display();
                
                Set set11;
                set11.input();
                Set set12;
                set12.input();
                cout << "set 11 " << endl;
                set11.display();
                cout << "set 12 " << endl;
                set12.display();
                
                Set set13 = set12 - set11;
                set13.display();

                
                // Exception Handling Lab
                // Danielle Bufano
                // 4/23/18
                
#include <string>
#include <iostream>
                using namespace std;
                
                int main(){
                    int d;
                    int m;
                    string inv;
                    
                    cout << "Enter DD MM or ^Z to exit: " << endl;
                    while (cin >> d >> m)
                    {
                        try
                        {
                            if ((d < 1 || d > 31) && (m >= 1 && m <= 12))
                            {
                                throw "Invalid day exception";
                            }
                            
                            if ((d >= 1 && d <= 31) && (m < 1 || m > 12))
                            {
                                throw "Invalid month exception";
                            }
                            
                            if ((d < 1 || d > 31) && (m < 1 || m > 12))
                            {
                                throw "Invalid day exception, Invalid month exception";
                            }
                            
                        }
                        catch(char const* inv)
                        {
                            cout << inv << endl;
                        }
                        
                        cout << "Enter DD MM or ^Z to exit: " << endl;
                    }
                    return 0;
                }
                
                
            /*Using try, throw, and catch. Write a program that reads day and month values and print the message:
             "Invalid day exception“ when an invalid day (< 1 or > 31)  is entered,
             "Invalid month exception” when an invalid month (< 1 or > 12) is entered.
             
             If both day and month are invalid, program must print both exception messages
             "Invalid day exception“
             "Invalid month exception”
             
             Demonstrate in a driver program with a loop that keeps asking the user to ”Enter DD MM (^Z to exit) : “.
             */


                
                // Danielle Bufano
                // Square h-file
                
                
#ifndef Square_h
#define Square_h
                
#include <string>
                using namespace std;
                
                class Square{
                public:
                    int setNum();
                    int getNum()
                    {return num;}
                    void blackSquare(int);
                    bool isSquareBlack()
                    {return isBlack;}
                    void printBool();
                    
                private:
                    int num;
                    bool isBlack;
                    int square;
                    
                };
            
#endif
            
            
            
                // Danielle Bufano
                // Square cpp
                
#include <iostream>
#include <cstdlib>
#include "Square.h"
                using namespace std;
                
                int Square::setNum()
            {
                srand(time(0));
                square = rand()%2;
                return square;
            }
                
                void Square::blackSquare(int n)
            {
                if (n == 1)
                    isBlack = true;
                else
                    isBlack = false;
            }
                
                void Square::printBool()
            {
                if (isSquareBlack())
                    cout << " 0 ";
                else
                    cout << " 1 ";
            }

                
                
                // Danielle Bufano
                // Crossword h-file
                
#ifndef Crossword_h
#define Crossword_h
                
#include "Square.h"
                using namespace std;
                
                const int MAXROW = 10;
                const int MAXCOL = 10;
                
                class Crossword {
                public:
                    Crossword(int, int);
                    //void setSquares(Square***);
                    
                private:
                    int r;
                    int c;
                    Square puzzle[MAXROW][MAXCOL];
                };
            
#endif
            
            
                // Danielle Bufano
                // Crossword cpp
                
#include <iostream>
#include <cstdlib>
#include "Crossword.h"
                using namespace std;
                
                Crossword::Crossword(int row, int col)
            {
                r = row;
                c = col;
                
                srand(time(0));
                for (int i = 0; i < r; i++)
                {
                    for (int j = 0; j < c; j++)
                    {
                        puzzle[i][j].setNum();
                        int number = puzzle[i][j].getNum();
                        cout << "hi" << number << " ";
                        puzzle[i][j].blackSquare(number);
                        puzzle[i][j].printBool();
                    }
                    cout << endl;
                }
            }
                
            /*void Crossword::setSquares(Square **ptr)
             {
             
             } */

                
                // Danielle Bufano
                // 4/26/18
                
#include <iostream>
#include "Square.h"
#include "Crossword.h"
                using namespace std;
                
                int main(){
                    
                    int rows;
                    int cols;
                    
                    cout << "Enter the number of rows and columns for your crossword puzzle" << endl;
                    cin >> rows >> cols;
                    Crossword p1(rows,cols);
                    
                }


