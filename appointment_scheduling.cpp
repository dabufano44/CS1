
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
        addit = true;
        clearConflicts(appt);
    }
    
    if (addit)
        DailySchedule.push_back(appt);
    
    return addit;
    
}

void clearConflicts(Appointment emergencyappt){
    
    for (int i = 0; i < overlaps.size(); i++)
        for (int index = 0; index < (DailySchedule.size() - 1); index++)
            DailySchedule[index] = DailySchedule[index + 1];
    

    for (int i = 0; i < DailySchedule.size(); i++)
        cout << DailySchedule[i].time.start << " " << DailySchedule[i].time.end << endl;
    cout << endl;
    
    int index = 0;
    for (int i = 0; i < 4; i++)
    {
        if (overlapsWith(emergencyappt.time, DailySchedule[i].time))
        {
            i = index;
            cout << index << "hi " << endl;
            for (int i = index; i < (DailySchedule.size() - 1); i++)
            {
                DailySchedule[index] = DailySchedule[index + 1];
            }
        }
    }
}

/*  int i;
 vector<int> overlaps;
 
 for (i = 0; i < DailySchedule.size(); i++){
 if (overlapsWith(emergencyappt.time, DailySchedule[i].time))
 {
 overlaps.push_back(i);
 }
 }
 
 for (in)
 
 
 }*/



/* bool addit = true;

for (int i = 0; i < DailySchedule.size(); i++)
{
    bool overlaps;
    overlaps = overlapsWith(appt.time, DailySchedule[i].time);
    if (overlaps)
        addit = false;
        }
 */



