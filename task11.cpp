#include<iostream>
using namespace std;
main()
{
    cout << "Enter the person's age: ";
    int personage;
    cin >> personage;
    cout << "Enter the number of times they've moved: ";
    int noOftimes;
    cin >> noOftimes;
    float average;
    average=personage/(noOftimes+1);
    cout << "Average number of years lived in the same house: "<<average;
}