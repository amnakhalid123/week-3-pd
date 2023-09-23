#include<iostream>
using namespace std;
main()
{
     int digit,sum;
     cout << "Enter a 4-digit number: ";
     cin >> digit;
     int remainder1=digit%10;
    int consume1=digit/10;
    int remainder2=consume1%10;
    int consume2=consume1/10;
    int remainder3=consume2%10;
    int consume3=consume2/10;
    int remainder4=consume3%10;

     cout << "Sum of individual digits: "<<remainder1+remainder2+remainder3+remainder4;
}
    