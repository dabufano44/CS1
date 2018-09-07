// Lab 11.5

// Danielle Bufano
// 11/10/17

#include <iostream>
#include <iomanip>
#include <cmath> // necessary for pow function #include <iomanip>
using namespace std;



//Option 1: Re-write Sample Program 11.2 so that it works for an array of structures. Write the program so that it compares 6 circles. You will need to come up with a new way of determining which circle’s center is closest to the origin.

struct circle // declares the structure circle
{

    float centerX;
    float centerY;
    float radius;
    float area;
    float circumference;
    float distance_from_origin;
};

const float PI = 3.14159;

int main() {
    
    const int SIZE = 6;
    circle circ[SIZE]; // defines 2 circle structure variables
    
    
    for (int i = 0; i < 6; i++){
        cout << "Please enter the radius of circle " << i + 1 << ": ";
        cin >> circ[i].radius;
        cout << endl << "Please enter the x-coordinate of the center: ";
        cin >> circ[i].centerX;
        cout << endl << "Please enter the y-coordinates of the center: ";
        cin >> circ[i].centerY;
    }
    
    
    for (int i = 0; i < 6; i++){
    circ[i].area = PI * pow(circ[i].radius, 2.0);
    circ[i].circumference = 2 * PI * circ[i].radius;
    circ[i].distance_from_origin = sqrt(pow(circ[i].centerX,2.0) + pow(circ[i].centerY,2.0)); cout << endl << endl;
    }
    
    int closest = circ[0].distance_from_origin;
    int index = 0;
    for (int i = 0; i < 6; i++){
        if (circ[i].distance_from_origin < closest){
            closest = circ[i].distance_from_origin;
            index = i;
        }
    }
    cout << endl;
    cout << "Circle " << index + 1 << " is closest to the origin" << endl << endl;
    
    for (int i = 0; i < 6; i++){
        cout << setprecision(2) << fixed << showpoint;
        cout << "The area of circle " << i + 1 << " is: ";
        cout << circ[i].area << endl;
        cout << "The circumference of circle " << i << " is: ";
        cout << circ[i].circumference << endl << endl;
    }
    
    return 0;
    
}
  

