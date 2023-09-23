#include<iostream>
using namespace std;
main()
{
      cout << "Enter Initial Velocity (m/s): ";
      int initialvelocity;
      cin >> initialvelocity;
      cout << "Enter Acceleration (m/s^2): ";
      int acceleration;
      cin >> acceleartion;
      cout << "Enter Time (s): ";
      int time;
      cin >> time;
      float finalvelocity;
      finalvelocity=(acceleration*time)+initialvelocity;
      cout << "Final Velocity (m/s): "<<finalvelocity;
}