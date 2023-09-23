#include<iostream>
using namespace std;
main()
{
     cout << "Nmuber of Minutes: ";
     int min;
     cin >> min;
     cout << "Frames per Second: ";
     int sec;
     cin >> sec;
     float F;
     F=min*sec*60;
     cout << "Total Number of Frames: "<<F;
  }