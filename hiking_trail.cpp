// Hiking Trail

// Danielle Bufano
// 11/7/17

#include <iostream>

using namespace std;

bool isLevelTrailSegment(int [], int, int);
bool isDifficult(int [], int, int);

int main()
{
    const int SIZE=13;
    int markers[SIZE]={100,150,105,120,90,80,50,75,75,70,80,90,100};
    bool isLevel;
    bool difficult;
    int start=7, end=10;
    
    cout<<"\nTrail between markers " << start << "-" << end << " is ";
    isLevel=isLevelTrailSegment(markers, start, end);
    if (isLevel)
        cout<<"level"<<endl;
    else
        cout<<"not level"<<endl;
    
    
    start=2;
    end=12;
    cout<<"\nTrail between markers " << start << "-" << end << " is ";
    isLevel=isLevelTrailSegment(markers, start, end);
    if (isLevel)
        cout<<"level."<<endl;
    else
        cout<<"not level."<<endl;
    
    start=5;
    end=12;
    cout<<"\nTrail between markers " << start <<"-" << end << " is ";
    difficult=isDifficult(markers, start, end);
    if (difficult)
        cout<<"difficult."<<endl;
    else
        cout<<"not difficult."<<endl;
    
    start=0;
    end=12;
    cout<<"\nTrail between markers " << start << "-" << end << " is ";
    difficult=isDifficult(markers, start, end);
    if (difficult)
        cout<<"difficult."<<endl;
    else
        cout<<"not difficult."<<endl;
    
    return 0;
}

bool isLevelTrailSegment(int markers[],int start, int end)
{
    int largest = markers[start];
    for (int i = start; i < end; i++){
        if (markers[i] > largest)
            largest = markers[i];
    }
    
    int smallest = markers[start];
    for (int i = start; i <= end; i++){
        if (markers[i] < smallest)
            smallest = markers[i];
    }
    if (largest - smallest > 10)
        return false;
    else
        return true;
}

bool isDifficult(int markers[],int start, int end)
{
    int totalSegment = 0;
    for (int i = start; i < end; i ++){
        if ((markers[i + 1] - markers[i]) >= 30)
            totalSegment++;
        else if ((markers[i + 1] - markers[i] <= -30))
            totalSegment++;
    }
    
    if (totalSegment >= 3)
        return true;
    else
        return false;
}
