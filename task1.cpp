#include<iostream>
using namespace std;
main()
{
    cout << "Enter the number of sides of the polygon: ";
    int sides;
    cin >> sides;
    float A;
    A=(sides-2)*180;
    cout << "The sum of internal angles of a 40-sided polygon is: "<<A<<" degrees";
}