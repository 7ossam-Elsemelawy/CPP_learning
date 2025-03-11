#include <iostream>
#include <unistd.h>  // For sleep()
#include <cstdlib>   // For Clear the screen

using namespace std;

int main() 
{
    int hours = 0, minutes = 0, seconds = 0;
    
    cout << "Enter the time " << endl;
    cout << "hours :";
    cin >> hours;
    cout << "minutes :";
    cin >> minutes;
    cout << "seconds :";
    cin >> seconds;

    while (true) 
    {
        system("clear");  
        
        cout << hours << ":" << minutes << ":" << seconds << endl;

        sleep(1);

        seconds++;
        if (seconds == 60) 
        {
            seconds = 0;
            minutes++;
        }
        if (minutes == 60) 
        {
            minutes = 0;
            hours++;
        }
        if (hours == 24) 
        {
            hours = 0;
        }  
    }

    return 0;
}
