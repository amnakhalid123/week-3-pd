#include<iostream>
using namespace std;
main()
{
   cout << "Number of square meters you can paint: ";
   int noOfsquaremeters;
   cin >> noOfsquaremeters;
   cout << "Width of single wall (in meters): ";
   int width;
   cin >> width;
   cout << "Height of the single wall (in meters): ";
   int height;
   cin >> height;
   float noOfwalls;
   noOfwalls=noOfsquaremeters/(width*height);
   cout << "Number of walls you can paint: "<<noOfwalls;
}